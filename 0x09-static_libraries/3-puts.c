#include "main.h"
/**
 *_puts - prints a string to std out, followed by a new line
 *@str: pointer to string to print
 *
 */
void _puts(char *str)
{
	while (str)
	{
		if (*str == 0)
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(*str);
		str++;
	}
}
