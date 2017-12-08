#include "SATRange.h"
#include "TooHigh.h"
#include "TooLow.h"
#include <iostream>
using namespace std;

SATRange::SATRange()
{
}

int SATRange::getInput()
{
	cin >> input;

	if (input < 0)
	{
		throw TooLow();
	}

	else if (input > 1600)
	{
		throw TooHigh();
	}

	return input;
}