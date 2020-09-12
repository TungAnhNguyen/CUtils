#include <stdio.h>
#include "BitUtils.h"

int main()
{

	int i = 2222;
	printf("i: %d; endBits: %d\n", i, getEndBits(i, 10));
}