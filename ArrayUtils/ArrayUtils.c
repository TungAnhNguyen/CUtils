#include "ArrayUtils.h"

void swap(int* inputArray, int firstIndex, int secondIndex) 
{
	int tempNumber = *(inputArray + firstIndex);
	*(inputArray + firstIndex) = *(inputArray + secondIndex);
	*(inputArray + secondIndex) = tempNumber;
}


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

void bubbleSort(int* inputArray, int size) 
{
	for	(int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (*(inputArray + j) > *(inputArray + j + 1))
			{
				swap(inputArray, j, j+1);
			}
		}

		int indexOfMinNumber = i;
		//swap current index "i" with new index indexOfMinNumber
		swap(inputArray, i, indexOfMinNumber);
	}
}