#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints integers passed as optional arguments,
 *	 separated by a given string.
 * @separator: string to print between integers
 * @n: number of optional arguments passed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ints;
	unsigned int i;

	va_start(ints, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ints, int));
		if (i <= (n - 2))
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(ints);
	putchar('\n');
}
