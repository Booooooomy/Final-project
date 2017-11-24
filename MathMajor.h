#include "AppliedStudents.h"

#ifndef MATHMAJOR_H
#define MATHMAJOR_H

class MathMajor : public AppliedStudents
{
public:
	MathMajor(int, int, int, int, int, int, int, int);
	virtual void convGPA() override;
};

#endif