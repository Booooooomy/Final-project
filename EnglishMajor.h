#include "AppliedStudents.h"

#ifndef ENGLISHMAJOR_H
#define ENGLISHMAJOR_H

class EnglishMajor : public AppliedStudents
{
private:
	double conGPA;
public:
	EnglishMajor(int, int, int, int, int, int, int);
	double getconGPA() const;
	virtual void convGPA() override;
	virtual void gradeShow() const override;
};

#endif