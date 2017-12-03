#include "AppliedStudents.h"
#include <string>

#ifndef MATHMAJOR_H
#define MATHMAJOR_H

class MathMajor : public AppliedStudents
{
private:
	double conGPA;
	double totScore = 0;

public:
	MathMajor(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
	double getconGPA() const;
	double gettotScore() const;
	virtual void convGPA() override;
	virtual void gradeShow() const override;
	virtual void settotScore() override;

	// Below are for program 2

	bool operator > (const MathMajor) const;				// Use of operator overloading (Chapter 10)
	bool operator < (const MathMajor) const;
	MathMajor operator = (const MathMajor);
};

#endif