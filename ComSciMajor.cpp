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

void ComSciMajor::gradeShow() const
{
	cout << "\n\nWhen CS division of University of Glendale convert student's GPA," << endl;
	cout << "We consider Math 30%, Science 50% and English 20%." << endl;
	cout << "Maximum converted GPA is 10 (however, if you took AP or Honors, it's possible to get higher)\n\n" << endl;
	cout << "Your Math GPA:                    " << getMathavg() << endl;
	cout << "Your Science GPA:                 " << getSciavg() << endl;
	cout << "Your English GPA:                 " << getEngavg() << endl;
	cout << "Your converted GPA:               " << getconGPA() << "\n" << endl;
	cout << "Your raw SAT:                     " << getrawSAT() << endl;
	cout << "Your raw ACT:                     " << getrawACT() << endl;
	cout << "Your converted Standadized Score: " << getconSTS() << endl;
	cout << "Your total converted Score:       " << getconGPA() + getconSTS() << endl;
}

void ComSciMajor::settotScore()
{
	totScore = conGPA + getconSTS();
}