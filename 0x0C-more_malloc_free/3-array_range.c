#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first value
 * @max: last value
 *
 * Description: The array created will contain all the values from
 *	min (included) to max (included), ordered from min to max
 * Return: pointer to created array or
 *	   NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		*(array + j) = i;
		j++;
	}
	return (array);
}
