#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of an int square matrix
 *@a: pointer to the integer array
 *@size: diagonal length
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += *(*(a + i)+(size - i));
		sum2 += (*(a + i) + (size + i));
	}
	printf("%d, %d\n", sum1, sum2);
}
