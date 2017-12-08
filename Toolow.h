#include <stdexcept>
using namespace std;

#ifndef TOOLOW_H
#define TOOLOW_H

class TooLow :public runtime_error
{
public:
	TooLow() :runtime_error("SAT score should be in between 0 and 1600\n ACT score should be in between 0 and 36\ntry again!")
	{
	}
};

#endif