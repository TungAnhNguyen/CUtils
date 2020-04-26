#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayUtils.h"

int main()
{
	int sortArray[] = {69, 12, 7, 8, 12, 11, 4, 6, 100, 10, 2, 5, 13, 18, 21, 3};
	// //sorted: 		   2; 3; 4; 5; 6; 7; 8; 10; 11; 12; 12; 13; 18; 21; 69, 100;
	int* sortPointer = sortArray;
	int size  = sizeof(sortArray)/sizeof(int);

	int middle = size / 2 - 2;
	int* firstArray = (int*) calloc(middle, sizeof(int));
	int* secondArray = (int*) calloc(size - middle, sizeof(int));
	splitArray(sortArray, 0, middle, size, firstArray, secondArray);

	for (int i = 0; i < middle; i++)
	{
		printf("%d ", *(firstArray + i));
	}
	printf("%s", "\n");	
	
	for (int i = 0; i < size - middle; i++)
	{
		printf("%d ", *(secondArray + i));
	}
}