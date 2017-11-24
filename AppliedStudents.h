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
	int numOthers;
	double conGPA;
	double conSAT;
	double conACT;
	int rawSAT = 0;
	int rawACT = 0;

public:
	AppliedStudents(int, int, int, int, int, int, int, int);	// Use of Dynamic Memory Allocation (Chapter 8 - Pointer)
	virtual void convGPA() = 0;							// Use of Pure Virtual function (Chapter 12 - Polymorphism)
	void convSAT();
	void convACT();
	double getconSAT() const;
	double getconACT() const;
	double getconGPA() const;
};

#endif