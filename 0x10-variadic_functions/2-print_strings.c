#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings passed as optional arguments,
 *	separated by a given string
 * @separator: string to print between passed strings
 * @n: number of strings passed
 *
 * Description: print (nil) if a string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		printf("%s", ((str == NULL) ? "(nil)" : str));
		if ((n > 1 && i <= (n - 2)) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(strings);
	putchar('\n');
}

