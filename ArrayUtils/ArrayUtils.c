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

/**
 * @return -1 if startIndex out of bound
*/
int findMinNumberIndex(int* inputArray, int startIndex, int size) 
{
	if (startIndex < 0 || startIndex >= size)
	{
		return -1;
	}
	
	int minNumberIndex = startIndex;
	for (int i = startIndex; i < size; i++)	
	{
		int currentNumber = *(inputArray + i);
		if (currentNumber < *(inputArray + minNumberIndex))
		{
			minNumberIndex = i;
		}
	}
	return minNumberIndex;
}

void quickSort(int* inputArray, int size) 
{
	for (int i = 0; i < size; i++)
	{
		int indexOfMinNumber = findMinNumberIndex(inputArray, i, size);
		if (i != indexOfMinNumber)
		{
			swap(inputArray, i, indexOfMinNumber);
		}
	}	
}

/**
 * @param firstArray occupies from startIndex to middleIndex (exclusive)
 * @param secondArray occupies from middleIndex (inclusive) to size - 1
 * it's up to the caller to make sure indexes are not out of bound.
*/
void splitArray(int* inputArray, int startIndex, int middleIndex, int size, int* firstArray, int* secondArray)
{
	for (int i = 0; i < middleIndex; i++)
	{
		*(firstArray + i) = *(inputArray + i);
	}

	for (int i = middleIndex; i < size; i++)
	{
		*(secondArray + i - middleIndex) = *(inputArray + i);
	}
}