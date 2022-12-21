#include "main.h"

/**
 *reverse_array - reverses the content of an integer array
 *@a: pointer to the array
 *@n: number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int tmp = 0;

	while ((n / 2) > 0)
	{
		tmp = *a;
		*a = *(a + (n - 1));
		*(a + (n - 1)) = tmp;
		n -= 2;
		a++;
	}
}
