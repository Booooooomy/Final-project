// Beomjoo KIM
// CSIS 137 Final project

#include "AppliedStudents.h"
#include <iostream>
using namespace std;

AppliedStudents::AppliedStudents(int E, int H, int M, int S, int C, int SA, int AC)
{
	numEng = E;
	numHSS = H;
	numMath = M;
	numSci = S;
	numComSci = C;
	rawSAT = SA;
	rawACT = AC;
}

void AppliedStudents:: convSAT(double rSAT)
{
	rawSAT = rSAT;
	conSAT = rSAT / 160;
}

void AppliedStudents:: convACT(double rACT)
{
	rawACT = rACT;
	conACT = ((rACT / 36) * 10);
}

void AppliedStudents::CalcEng(int i, double num)
{
	EngPtr[i] = num;
}

void AppliedStudents::setAvgEng(double tot)
{
	Engavg = tot / numEng;
}

void AppliedStudents::CalcHSS(int i, double num)
{
	HSSPtr[i] = num;
}

void AppliedStudents::setAvgHSS(double tot)
{
	HSSavg = tot / numHSS;
}

void AppliedStudents::CalcMath(int i, double num)
{
	MathPtr[i] = num;
}

void AppliedStudents::setAvgMath(double tot)
{
	Mathavg = tot / numMath;
}

void AppliedStudents::CalcSci(int i, double num)
{
	SciPtr[i] = num;
}

void AppliedStudents::setAvgSci(double tot)
{
	Sciavg = tot / numSci;
}

void AppliedStudents::CalcComSci(int i, double num)
{
	ComSciPtr[i] = num;
}

void AppliedStudents::setAvgComSci(double tot)
{
	ComSciavg = tot / numComSci;
}

void AppliedStudents::setconSTS()
{
	if (conSAT >= conACT)
		conSTS = conSAT;
	else
		conSTS = conACT;
}

double AppliedStudents::getconSTS()const
{
	return conSTS;
}

double AppliedStudents::getconSAT()const
{
	return conSAT;
}

double AppliedStudents::getconACT()const
{
	return conACT;
}

double AppliedStudents::getEngavg() const
{
	return Engavg;
}

double AppliedStudents::getHSSavg() const 
{
	return HSSavg;
}

double AppliedStudents::getMathavg() const
{
	return Mathavg;
}

double AppliedStudents::getSciavg() const
{
	return Sciavg;
}

double AppliedStudents::getComSciavg() const
{
	return ComSciavg;
}

double AppliedStudents::getrawSAT() const
{
	return rawSAT;
}

double AppliedStudents::getrawACT() const
{
	return rawACT;
}