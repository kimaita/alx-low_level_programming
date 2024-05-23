#include <stdio.h>
#include <math.h>
#include "search_algos.h"

void checked_element(int *arr, size_t idx);
void checked_range(int lower, int upper);

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Description: The square root of the size of the array is used as
 * the jump step.
 *
 * Return: first index where `value` is located or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, i, upper;

	if (!array)
		return (-1);

	step = sqrt(size);
	upper = i = 0;

	while (array[upper] < value && upper < size)
	{
		checked_element(array, upper);
		i = upper;
		upper += step;
	}

	checked_range(i, upper);
	while (i <= upper && i < size)
	{
		checked_element(array, i);
		if (array[i] == value)
			return (i);

		i += 1;
	}

	return (-1);
}

/**
 * checked_element - prints the array element being compared against the
 * search value
 *
 * @arr: array of integers
 * @idx: index of element being checked
 */
void checked_element(int *arr, size_t idx)
{
	printf("Value checked array[%ld] = [%d]\n", idx, arr[idx]);
}

/**
 * checked_range - prints the indexes between which the search value lies
 *
 * @lower: lower index
 * @upper: upper index
 */
void checked_range(int lower, int upper)
{
	printf("Value found between indexes [%d] and [%d]\n", lower, upper);
}
