#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StringUtils.h"

//should I use unit test instead?
int main()
{
	char * source = malloc(1000);
	char * pattern = malloc(100);

	strcpy(source, "123456");
	int number = convertStringToInt(source);
	printf("number: %d\n", number);
	printf("MARKEND");
}