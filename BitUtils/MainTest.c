#include <stdio.h>
#include "BitUtils.h"

int main()
{
	for (int i = 0; i < 11; i++)
	{
		printf("i: %d; fieldOne: %d\n", i, createBitFieldOne(i) + 1);
	}
	
}