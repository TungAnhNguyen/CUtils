#include <stdio.h>
#include <string.h>
#include "ArrayUtils.h"

int main()
{
	int sortArray[] = {69, 12, 7, 8, 12, 11, 4, 6, 100, 10, 2, 5, 13, 18, 21, 3};
	//sorted: 		   2; 3; 4; 5; 6; 7; 8; 10; 11; 12; 12; 13; 18; 21; 69, 100;
	int size  = sizeof(sortArray)/sizeof(int);
	printf("size: %d\n", size);
	int* sortPointer = sortArray;
	quickSort(sortArray, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d; ", sortArray[i]);
	}
	printf("\n");

	int numberToFind = 21;
}