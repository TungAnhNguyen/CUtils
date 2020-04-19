#include <stdio.h>
#include <string.h>
#include "ArrayUtils.c"

// void swap(int* sortArray, int firstIndex, int secondIndex)
// {
// 	int temp = *(sortArray + firstIndex);
// 	*(sortArray + firstIndex) = *(sortArray + secondIndex);
// 	*(sortArray + secondIndex) = temp;
// }

int binarySearch(int* sortedArray, int numberToFind, int size) 
{
	int lowerIndex = 0;
	int upperIndex = size; // TODO consider remove
	int middleIndex = size/2;

	while (lowerIndex != upperIndex)
	{
		int suspectedIndex = (lowerIndex + upperIndex) / 2;
		int middleNumber = *(sortedArray + suspectedIndex);
		printf("suspectedIndex: %d; middleNumber: %d\n", suspectedIndex, middleNumber);
		if (numberToFind == middleNumber)
		{
			printf("Found numberToFind %d at index: %d\n", numberToFind, suspectedIndex);
			return suspectedIndex;
		}
		else if (numberToFind < middleNumber)
		{
			printf("%d < %d at middleIndex: %d\n", numberToFind, middleNumber, middleIndex);
			upperIndex = suspectedIndex;
		}
		else if (numberToFind > middleNumber)
		{
			printf("%d > %d at middleIndex: %d\n", numberToFind, middleNumber, middleIndex);
			lowerIndex = suspectedIndex;
		}
	}

	printf("Number not found\n");
	return -1;
}

int main()
{
	int sortArray[] = {69, 12, 7, 8, 12, 11, 4, 6, 100, 10, 2, 5, 13, 18, 21, 3};
	//sorted: 		   2; 3; 4; 5; 6; 7; 8; 10; 11; 12; 12; 13; 18; 21; 69, 100;
	int size  = sizeof(sortArray)/sizeof(int);
	printf("size: %d\n", size);
	int* sortPointer = sortArray;
	for	(int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size - 1; j++)
		{
			if ( *(sortPointer + j) > *(sortPointer + j + 1) )
			{
				swap(sortPointer, j, j+1);
			}
		}

		int indexOfMinNumber = i;
		//swap current index "i" with new index indexOfMinNumber
		swap(sortPointer, i, indexOfMinNumber);
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d; ", sortArray[i]);
	}
	printf("\n");

	int numberToFind = 21;
	int foundIndex = binarySearch(sortArray, numberToFind, size);
	printf("foundIndex: %d\n", foundIndex);
}