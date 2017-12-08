#include "AppliedStudents.h"

#ifndef COMSCIMAJOR_H
#define COMSCIMAJOR_H

class ComSciMajor : public AppliedStudents
{
	friend ostream& operator<<(ostream&, const ComSciMajor&);		// Use of Operator Overloading

private:
	double conGPA;
	double totScore;
public:
	ComSciMajor(int, int, int, int, int, int, int);
	double getconGPA() const;
	double gettotScore() const;
	virtual void convGPA() override;
	virtual void settotScore() override;
};

#endif