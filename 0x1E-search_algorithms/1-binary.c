#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array of integers
 *
 * @arr: the array to print
 * @L: lowest index bound
 * @R: highest index bound
 */
void print_array(int *arr, size_t L, size_t R)
{
	size_t i;

	printf("Searching in array: ");
	for (i = L; i < R; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d\n", arr[R]);
}

/**
 * binary_search - earches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: first index where `value` is located or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{

	size_t idxL, idxR, idxM;

	if (!array || !size)
		return (-1);

	idxL = 0;
	idxR = size - 1;

	while (idxL < idxR)
	{
		print_array(array, idxL, idxR);

		idxM = (idxL + idxR) / 2;

		if (array[idxM] == value)
			return (idxM);

		if (array[idxM] > value)
			idxR = idxM - 1;
		else
			idxL = idxM + 1;
	}
	print_array(array, idxL, idxR);
	
	if (array[idxL] == value)
		return (idxL);

	return (-1);
}
