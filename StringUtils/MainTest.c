#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StringUtils.h"

int main()
{
	char * str = malloc(1000);
	strcpy(str, "I wondER if this TESt wOrkS iN C Sharp and in OTHER TEST As WElL\0");

	printf("before: %s\n", str);
	toUpperCase(str);
	printf("after: %s\n", str);
}