#include <stdexcept>
using namespace std;

#ifndef TOOHIGH_H
#define TOOHIGH_H

class TooHigh :public runtime_error
{
public:
	TooHigh() :runtime_error("SAT score should be in between 0 and 1600\nACT score should be in between 0 and 36\nTry again!")
	{
	}
};

#endif