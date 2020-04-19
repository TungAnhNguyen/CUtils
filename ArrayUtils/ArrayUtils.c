#include "ArrayUtils.h"

void swap(int* inputArray, int firstIndex, int secondIndex) 
{
	int tempNumber = *(inputArray + firstIndex);
	*(inputArray + firstIndex) = *(inputArray + secondIndex);
	*(inputArray + secondIndex) = tempNumber;
}