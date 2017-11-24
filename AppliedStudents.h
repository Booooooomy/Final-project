// Beomjoo KIM
// CSIS 137 Final project

#ifndef APPLIEDSTUDENTS_H
#define APPLIEDSTUDENTS_H

class AppliedStudents		// Abstract Base class - Use of inheritance (Chapter 11 - inheritance)
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

public:
	AppliedStudents(int, int, int, int, int, int, int);			// Use of Dynamic Memory Allocation (Chapter 8 - Pointer)
	virtual void convGPA() = 0;						        	// Use of Pure Virtual function (Chapter 12 - Polymorphism)
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
	virtual void gradeShow() const = 0;
};

#endif