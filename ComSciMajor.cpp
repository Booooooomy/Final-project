#include "ComSciMajor.h"
#include <iostream>
using namespace std;

ComSciMajor::ComSciMajor(int numEng, int numHSS, int numMath, int numSci, int numComSci, int rawSAT, int rawACT) :AppliedStudents(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT)
{
}

void ComSciMajor::convGPA()			// For Computer Science major, UG consider CS GPA 50%, Math GPA 30%, English GPA 20%)
{
	double tot = getMathavg() * 3 + getSciavg() * 5 + getEngavg() * 2;
	conGPA = tot / 4;
}

double ComSciMajor::getconGPA() const
{
	return conGPA;
}

ostream& operator<<(ostream& output, const ComSciMajor& Com)
{
	if (Com.gettotScore() != 0) 
	{
		output << "\n\nWhen CS division of University of Glendale convert student's GPA," << endl
			<< "We consider Math 30%, Science 50% and English 20%." << endl
			<< "Maximum converted GPA is 10 (however, if you took AP or Honors, it's possible to get higher)\n\n" << endl
			<< "Your Math GPA:                    " << Com.getMathavg() << endl
			<< "Your Science GPA:                 " << Com.getSciavg() << endl
			<< "Your English GPA:                 " << Com.getEngavg() << endl
			<< "Your converted GPA:               " << Com.getconGPA() << "\n" << endl
			<< "Your raw SAT:                     " << Com.getrawSAT() << endl
			<< "Your raw ACT:                     " << Com.getrawACT() << endl
			<< "Your converted Standadized Score: " << Com.getconSTS() << endl
			<< "Your total converted Score:       " << Com.gettotScore() << endl;
	}
	else output;
	return output;
}


void ComSciMajor::settotScore()
{
	totScore = conGPA + getconSTS();
}

double ComSciMajor::gettotScore() const
{
	return totScore;
}