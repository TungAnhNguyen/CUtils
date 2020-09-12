#include "BitUtils.h"

int getBitLength(int x)
{
	int length = 0;

	while (x != 0)
	{
		x = x >> 1;
		++length;
	}

	return length;
}