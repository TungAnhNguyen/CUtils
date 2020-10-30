#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StringUtils.h"

//should I use unit test instead?
int main()
{
	char * source = malloc(1000);
	char * pattern = malloc(100);

	strcpy(source, "      I wondER if this TESt wOrkS iN C Sharp and in OTHER TEST As WElL         \0");
	toLowerCase(source);
	printf("original string: %sMARKEND\n", source);
	source = trim(source);

	printf("after trimmed: %sMARKEND\n", source);
}