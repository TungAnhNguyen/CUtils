#include <string.h>
#include <stdio.h>

#include "StringUtils.h"

#define LOWER_UPPER_CASE_DIFFERENCE 32

int getStringLength(char *s)
{
	int length = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		++length;
	}

	return length;
}

void toLowerCase(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + LOWER_UPPER_CASE_DIFFERENCE;
		}
	}
}

void toUpperCase(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - LOWER_UPPER_CASE_DIFFERENCE;
		}
	}
}

int stringIndex(char *source, char *pattern)
{
	int i, j;
	int isFound = 0;
	for (i = 0; source[i] != '\0'; i++)
	{
		for (j = 0; source[i] == pattern[j] && pattern[j] != '\0'; j++)
		{
			++i;
		}

		if (pattern[j] == '\0')
		{
			isFound = 1;
			break;
		}
	}
	if (isFound == 0)
	{
		return -1;
	}

	return i - j;
}

char* trim(char *source)
{
	int beginning = 0;
	for (beginning = 0; source[beginning] == ' '; beginning++)
	{
	}
	source += beginning;

	int sourceLength = getStringLength(source);
	int end;
	for (end = sourceLength - 1; source[end] == ' '; end--)
	{
	}

	++end;
	source[end] = '\0';

	printf("trim() source: %sMARKEND\n", source);
	return source;
}