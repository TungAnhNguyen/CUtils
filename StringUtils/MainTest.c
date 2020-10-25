#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StringUtils.h"

int main()
{
	char * str = malloc(1000);
	char * pattern = malloc(100);

	strcpy(str, "I wondER if this TESt wOrkS iN C Sharp and in OTHER TEST As WElL\0");
	strcpy(pattern, "harp\0");

	printf("patternIndex: %d\n", stringIndex(str, pattern));
}