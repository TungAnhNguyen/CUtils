#include <stdio.h>
#include <string.h>

void swap(int* inputArray, int firstIndex, int secondIndex);
int binarySearch(int* sortedArray, int numberToFind, int size);
void bubbleSort(int* inputArray, int size);
int findMinNumberIndex(int* inputArray, int startIndex, int size);
void quickSort(int* inputArray, int size);
void splitArray(int* inputArray, int startIndex, int middleIndex, int size, int* firstArray, int* secondArray);