#include "EnglishMajor.h"
#include <iostream>
using namespace std;

EnglishMajor::EnglishMajor(int numEng, int numHSS, int numMath, int numSci, int numComSci, int rawSAT, int rawACT) :AppliedStudents(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT)
{
}

void EnglishMajor::convGPA()			// For English major, UG consider English GPA 60%, and all other subjects 10% each)
{
	double tot = getEngavg() * 6 + getSciavg() + getHSSavg() + getMathavg() + getComSciavg();
	conGPA = tot / 4;
}

double EnglishMajor::getconGPA() const
{
	return conGPA;
}

ostream& operator<<(ostream& output, const EnglishMajor& Eng)
{
	if (Eng.gettotScore() != 0)
	{
		output << "\n\nWhen English division of University of Glendale convert student's GPA," << endl
			<< "We consider English GPA 60%, and all other subjects 10% each." << endl
			<< "Maximum converted GPA is 10 (however, if you took AP or Honors, it's possible to get higher)\n\n" << endl
			<< "Your Math GPA:                    " << Eng.getMathavg() << endl
			<< "Your Science GPA:                 " << Eng.getSciavg() << endl
			<< "Your English GPA:                 " << Eng.getEngavg() << endl
			<< "Your HSS GPA:                     " << Eng.getHSSavg() << endl
			<< "Your Computer Science GPA:        " << Eng.getComSciavg() << endl
			<< "Your converted GPA:               " << Eng.getconGPA() << "\n" << endl
			<< "Your raw SAT:                     " << Eng.getrawSAT() << endl
			<< "Your raw ACT:                     " << Eng.getrawACT() << endl
			<< "Your converted Standadized Score: " << Eng.getconSTS() << endl
			<< "Your total converted Score:       " << Eng.gettotScore() << endl;
	}
	else output;

	return output;
}

void EnglishMajor::settotScore()
{
	totScore = conGPA + getconSTS();
}

double EnglishMajor::gettotScore() const
{
	return totScore;
}