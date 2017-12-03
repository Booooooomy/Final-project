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

void EnglishMajor::gradeShow() const
{
	cout << "\n\nWhen English division of University of Glendale convert student's GPA," << endl;
	cout << "We consider English GPA 60%, and all other subjects 10% each." << endl;
	cout << "Maximum converted GPA is 10 (however, if you took AP or Honors, it's possible to get higher)\n\n" << endl;
	cout << "Your Math GPA:                    " << getMathavg() << endl;
	cout << "Your Science GPA:                 " << getSciavg() << endl;
	cout << "Your English GPA:                 " << getEngavg() << endl;
	cout << "Your HSS GPA:                     " << getHSSavg() << endl;
	cout << "Your Computer Science GPA:        " << getComSciavg() << endl;
	cout << "Your converted GPA:               " << getconGPA() << "\n" << endl;
	cout << "Your raw SAT:                     " << getrawSAT() << endl;
	cout << "Your raw ACT:                     " << getrawACT() << endl;
	cout << "Your converted Standadized Score: " << getconSTS() << endl;
	cout << "Your total converted Score:       " << getconGPA() + getconSTS() << endl;
}

void EnglishMajor::settotScore()
{
	totScore = conGPA + getconSTS();
}