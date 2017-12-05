#include "AppliedStudents.h"

#ifndef ENGLISHMAJOR_H
#define ENGLISHMAJOR_H

class EnglishMajor : public AppliedStudents
{
	friend ostream& operator<<(ostream&, const EnglishMajor&);		// Use of Operator Overloading

private:
	double conGPA;
	double totScore;

public:
	EnglishMajor(int, int, int, int, int, int, int);
	double getconGPA() const;
	double gettotScore() const;
	virtual void convGPA() override;
	//virtual void gradeShow() const override;
	virtual void settotScore() override;
};

#endif