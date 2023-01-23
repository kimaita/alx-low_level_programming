#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its optional arguments
 * @n: number of optional arguments
 *
 * Return: sum of optional arguments, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ints;
	unsigned int i;
	int sum;

	va_start(ints, n);
	i = sum = 0;
/*	if (n == 0)
		return (0);
		*/
	while (i < n)
	{
		sum += va_arg(ints, int);
		i++;
	}
	va_end(ints);
	return (sum);
}
