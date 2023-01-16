#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc and sets it to zero
 * @nmemb: number of array elements
 * @size: size of each array element
 *
 * Description: memory is set to zero
 * Return: pointer to the allocated memory
 *	   NULL if malloc fails || nmemb == 0 || size == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated;

	if (nmemb == 0 || size == 0)
		return (NULL);
	allocated = malloc(nmemb * size);
	if (allocated == NULL)
		return (NULL);
	memset(allocated, 0, (nmemb * size));
	return (allocated);
}
