#include <stdio.h>
#include "BitUtils.h"

int main()
{
	int i = 696903;
	printf("i: %d; frontBits: %d\n", i, getFrontBits(i, 10));
}