#include <stdio.h>
#include "BitUtils.h"

int main()
{
	int sum = 1;
	for (int i = 0; i < 11; i++)
	{
		printf("i: %d; fieldOne: %d\n", i, createBitFieldOne(i));
	}	
}