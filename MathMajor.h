#include "AppliedStudents.h"

#ifndef MATHMAJOR_H
#define MATHMAJOR_H

class MathMajor : public AppliedStudents
{
private:
	double conGPA;
public:
	MathMajor(int, int, int, int, int, int, int);
	double getconGPA() const;
	virtual void convGPA() override;
	virtual void gradeShow() const override;
};

#endif