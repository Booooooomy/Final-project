// Beomjoo KIM
// CSIS 137 Final project

#include <string>
using namespace std;

#ifndef APPLIEDSTUDENTS_H
#define APPLIEDSTUDENTS_H

class AppliedStudents						// Abstract Base class - Use of inheritance (Chapter 11 - inheritance)
{
private:
	int numEng;
	int numHSS;
	int numMath;
	int numSci;
	int numComSci;
	double rawSAT;
	double rawACT;
	double conSAT;
	double conACT;
	double conSTS;									// converted standadized score
	double Engavg = 0;
	double HSSavg = 0;
	double Mathavg = 0;
	double Sciavg = 0;
	double ComSciavg = 0;
	double* EngPtr = new double[numEng];
	double* HSSPtr = new double[numHSS];
	double* MathPtr = new double[numMath];
	double* SciPtr = new double[numSci];
	double* ComSciPtr = new double[numComSci];
	string name;

public:
	AppliedStudents(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);			// Use of Dynamic Memory Allocation (Chapter 8 - Pointer)
	virtual void convGPA() = 0;						        	// Use of Pure Virtual function     (Chapter 12 - Polymorphism)
	virtual void gradeShow() const = 0;
	virtual void settotScore() = 0;
	void convSAT(double);
	void convACT(double);
	void CalcEng(int, double);
	void setAvgEng(double);
	void CalcHSS(int, double);
	void setAvgHSS(double);
	void CalcMath(int, double);
	void setAvgMath(double);
	void CalcSci(int, double);
	void setAvgSci(double);
	void CalcComSci(int, double);
	void setAvgComSci(double);
	void setconSTS();
	void setName(string);
	string getName() const;
	double getconSTS() const;
	double getrawSAT() const;
	double getrawACT() const;
	double getconSAT() const;
	double getconACT() const;
	double getEngavg() const;
	double getHSSavg() const;
	double getMathavg() const;
	double getSciavg() const;
	double getComSciavg() const;
};

#endif