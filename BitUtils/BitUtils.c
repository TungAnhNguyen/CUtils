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

int getEndBits(int x, int countingFromEnd)
{
	int endBits = x >> countingFromEnd;
	endBits = endBits << countingFromEnd;
	endBits = x - endBits;

	return endBits;
}

int getFrontBits(int x, int countingFromRight)
{
	int lenX = getBitLength(x);

	int frontBits = x >> lenX - countingFromRight;
	return frontBits;
}

int createBitFieldOne(int length)
{
	//todo: implement
	int sum = 0;
	length--;
	for (int i = 0; i < length; i++)
	{
		sum += 2 << i;
	}
	
	return sum;
}