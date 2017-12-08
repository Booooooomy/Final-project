#include "ACTRange.h"
#include "TooHigh.h"
#include "TooLow.h"
#include <iostream>
using namespace std;

ACTRange::ACTRange()
{
}

int ACTRange::getInput()
{
	cin >> input;
	if (input < 0)
	{
		throw TooLow();
	}

	else if (input > 36)
	{
		throw TooHigh();
	}
	return input;
}