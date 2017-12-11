#ifndef NUMVALIDATE_H
#define NUMVALIDATE_H

class numValidate
{
private:
	int num;
public:
	numValidate()
	{};
	int numvalidate(int num)
	{
		if (num == 0)
			throw 0;
		else
			return num;
	}
};

#endif