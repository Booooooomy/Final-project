#include "MathMajor.h"

MathMajor::MathMajor(int numEng, int numHSS, int numMath, int numSci, int numComSci, int numOthers, int rawSAT, int rawACT):AppliedStudents(numEng, numHSS, numMath, numSci, numComSci, numOthers, rawSAT, rawACT)
{
	convGPA();
}

void MathMajor::convGPA()			// For math major, UG consider Math GPA 50%, Science 30% and English 20%)
{

}