// Beomjoo KIM
// CSIS 137 Final project

#include "AppliedStudents.h"
#include <iostream>
using namespace std;

AppliedStudents::AppliedStudents(int numEng, int numHSS, int numMath, int numSci, int numComSci, int numOthers, int rawSAT, int rawACT)
{
	double* EngPtr;
	double* HSSPtr;
	double* MathPtr;
	double* SciPtr;
	double* ComSciPtr;
	double* OthersPtr;
	double Engtot = 0;
	double HSStot = 0;
	double Mathtot = 0;
	double Scitot = 0;
	double ComScitot = 0;
	double Otherstot = 0;

	EngPtr = new double[numEng];
	HSSPtr = new double[numHSS];
	MathPtr = new double[numMath];
	SciPtr = new double[numSci];
	ComSciPtr = new double[numComSci];
	OthersPtr = new double[numOthers];

	// ABCDF 캐릭터 받는 것도 고려해보도록!
	cout << "( AP or Honors classes - A: 5, B: 4, C: 3, D: 2, F: 1" << endl;
	cout << "  Regular classes -      A: 4, B: 3, C: 2, D: 1, F: 0 )" << endl;
	cout << "According to chart above, type in your grade for each class" << endl;

	for (int i = 0; i < numEng; i++)				
	{
		cout << "Your English " << (i + 1) << " grade was: " << endl;
		cin >> EngPtr[i];
		Engtot += EngPtr[i];
	}

	for (int i = 0; i < numHSS; i++)
	{
		cout << "Your H/SS " << (i + 1) << " grade was: " << endl;
		cin >> HSSPtr[i];
		HSStot += HSSPtr[i];
	}

	for (int i = 0; i < numMath; i++)
	{
		cout << "Your Math " << (i + 1) << " grade was: " << endl;
		cin >> MathPtr[i];
		Mathtot += MathPtr[i];
	}

	for (int i = 0; i < numSci; i++)
	{
		cout << "Your Science " << (i + 1) << " grade was: " << endl;
		cin >> SciPtr[i];
		Scitot += SciPtr[i];
	}

	for (int i = 0; i < numComSci; i++)
	{
		cout << "Your Computer Science " << (i + 1) << " grade was: " << endl;
		cin >> ComSciPtr[i];
		ComScitot += ComSciPtr[i];
	}

	for (int i = 0; i < numOthers; i++)
	{
		cout << "Your Others " << (i + 1) << " grade was: " << endl;
		cin >> OthersPtr[i];
		Otherstot += OthersPtr[i];
	}

	double Engavg = Engtot / numEng;
	double HSSavg = HSStot / numHSS;
	double Mathavg = Mathtot / numMath;
	double Sciavg = Scitot / numSci;
	double ComSciavg = ComScitot / numComSci;
	double Othersavg = Otherstot / numOthers;

	convACT();
	convSAT();
	convGPA();		// parameter 넣어야 할 지도...?
}

void AppliedStudents:: convSAT()
{
	conSAT = rawSAT / 160;
}

void AppliedStudents:: convACT()
{
	conACT = ((rawACT / 36) * 10);
}

double AppliedStudents::getconSAT()const
{
	return conSAT;
}

double AppliedStudents::getconACT()const
{
	return conACT;
}

double AppliedStudents::getconGPA()const
{
	return conGPA;
}