#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory or exit with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);
	if (allocated == NULL)
		exit(98);
	return (allocated);
}
