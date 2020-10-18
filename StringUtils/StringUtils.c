#include "StringUtils.h"

#define LOWER_UPPER_CASE_DIFFERENCE 32


void toLowerCase(char * str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + LOWER_UPPER_CASE_DIFFERENCE;
		}
	}
}

void toUpperCase (char * str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - LOWER_UPPER_CASE_DIFFERENCE;
		}
	}
}