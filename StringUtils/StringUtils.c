#include <string.h>
#include <stdio.h>
#include <stdbool.h>

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

	return source;
}

void clearString(char *source)
{
	for (int i = 0; source[i] != '\0'; i++)
	{
		source[i] = ' ';
	}
}

//todo: expand it to include negative number and other special case
//todo: watch out stackoverflow at 10 ** 10
//todo: consider using pow from cmath.h
int powerInt(const int base, const int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	
	int result = base;
	for (int i = 1; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}

int convertStringToInt(char *source)
{
	trim(source);
	int length = getStringLength(source);

	int result = 0;
	for (int i = 0; i < length; i++)
	{
		if (!isDigit(source[i]))
		{
			break;
		}
		
		int digit = source[i] - '0';
		
		int columnNumber = digit * powerInt(10, length - i - 1);
		result += columnNumber;
	}

	return result;
}