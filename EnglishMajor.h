#include "AppliedStudents.h"

#ifndef ENGLISHMAJOR_H
#define ENGLISHMAJOR_H

class EnglishMajor : public AppliedStudents
{
private:
	double conGPA;
	double totScore;
public:
	EnglishMajor(int, int, int, int, int, int, int);
	double getconGPA() const;
	virtual void convGPA() override;
	virtual void gradeShow() const override;
	virtual void settotScore() override;
};

#endif