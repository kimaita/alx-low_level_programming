#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific character
 * @size: size of array to create
 * @c: character to populate array
 *
 * Return: pointer to the array or
 *	   NULL if size = 0 or on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc((sizeof(char) * size) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(array + i) = c;
	*(array + i) = '\0';
	return (array);
}
