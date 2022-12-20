#include "main.h"
#include <stdio.h>

/**
 *print_array - prints elements of a array
 *@a: array of integers
 *@n: number of array elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
