#include <stdio.h>
#include "BitUtils.h"

int main()
{
	for (int i = 0; i < 10001; i++)
	{
		printf("i: %d; length: %d\n", i, getBitLength(i));
	}
}