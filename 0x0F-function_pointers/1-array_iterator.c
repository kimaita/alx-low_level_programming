#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function to execute
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		while (size)
		{
			action(array[i]);
			size--;
			i++;
		}
	}
}
