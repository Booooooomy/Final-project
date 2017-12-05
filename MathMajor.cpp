#include "MathMajor.h"
#include <iostream>
using namespace std;

MathMajor::MathMajor(int numEng, int numHSS, int numMath, int numSci, int numComSci, int rawSAT, int rawACT):AppliedStudents(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT)
{
}

ostream& operator<<(ostream& output, const MathMajor& math)
{
	if (math.gettotScore() != 0)
	{
		output << "\n\nWhen Math division of University of Glendale convert student's GPA," << endl
			<< "We consider Math 50%, Science 30% and English 20%." << endl
			<< "Maximum converted GPA is 10 (however, if you took AP or Honors, it's possible to get higher)\n\n" << endl
			<< "Your name:                        " << math.getName() << endl
			<< "Your Math GPA:                    " << math.getMathavg() << endl
			<< "Your Science GPA:                 " << math.getSciavg() << endl
			<< "Your English GPA:                 " << math.getEngavg() << endl
			<< "Your converted GPA:               " << math.getconGPA() << "\n" << endl
			<< "Your raw SAT:                     " << math.getrawSAT() << endl
			<< "Your raw ACT:                     " << math.getrawACT() << endl
			<< "Your converted Standadized Score: " << math.getconSTS() << endl
			<< "Your total converted Score:       " << math.gettotScore() << endl;
	}
	else output;
	return output;
}

void MathMajor::convGPA()			// For math major, UG consider Math GPA 50%, Science 30% and English 20%)
{
	double tot = getMathavg() * 5 + getSciavg() * 3 + getEngavg() * 2;
	conGPA = tot / 4;
}

double MathMajor::getconGPA() const
{
	return conGPA;
}

/*
void MathMajor::gradeShow() const
{
	cout << "\n\nWhen Math division of University of Glendale convert student's GPA," << endl;
	cout << "We consider Math 50%, Science 30% and English 20%." << endl;
	cout << "Maximum converted GPA is 10 (however, if you took AP or Honors, it's possible to get higher)\n\n" << endl;
	cout << "Your name:                        " << getName() << endl;
	cout << "Your Math GPA:                    " << getMathavg() << endl;
	cout << "Your Science GPA:                 " << getSciavg() << endl;
	cout << "Your English GPA:                 " << getEngavg() << endl;
	cout << "Your converted GPA:               " << getconGPA() << "\n" << endl;
	cout << "Your raw SAT:                     " << getrawSAT() << endl;
	cout << "Your raw ACT:                     " << getrawACT() << endl;
	cout << "Your converted Standadized Score: " << getconSTS() << endl;
	cout << "Your total converted Score:       " << gettotScore() << endl;
}
*/
void MathMajor::settotScore()
{
	totScore = conGPA + getconSTS();
}

double MathMajor::gettotScore() const
{
	return totScore;
}