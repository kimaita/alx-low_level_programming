#include "function_pointers.h"

/**
 * int_index - searches for a integer in an array matching a condition
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to function that checks the condition
 *
 * Return: index of the first element for which the cmp does not return 0
 *	   -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (size)
		{
			if (cmp(array[i]))
				return (i);
			size--;
			i++;
		}
	}
	return (-1);
}
