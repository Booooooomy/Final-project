#include "AppliedStudents.h"

#ifndef COMSCIMAJOR_H
#define COMSCIMAJOR_H

class ComSciMajor : public AppliedStudents
{
private:
	double conGPA;
	double totScore;
public:
	ComSciMajor(int, int, int, int, int, int, int);
	double getconGPA() const;
	virtual void convGPA() override;
	virtual void gradeShow() const override;
	virtual void settotScore() override;
};

#endif