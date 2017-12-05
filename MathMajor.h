#include "AppliedStudents.h"
#include <string>

#ifndef MATHMAJOR_H
#define MATHMAJOR_H

class MathMajor : public AppliedStudents
{
	friend ostream& operator<<(ostream&, const MathMajor&);		// Use of Operator Overloading

private:
	double conGPA = 0;
	double totScore = 0;

public:
	MathMajor(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
	double getconGPA() const;
	double gettotScore() const;
	virtual void convGPA() override;
	//virtual void gradeShow() const override;
	virtual void settotScore() override;
};

#endif