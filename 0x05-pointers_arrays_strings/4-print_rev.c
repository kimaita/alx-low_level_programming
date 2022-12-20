#include "main.h"
#include "2-strlen.c"

/**
 *print_rev - prints a string in reverse folowwed by a new line
 *@s: pointer to string to be printed
 *
 */
void print_rev(char *s)
{
	int l = _strlen(s);

	while (l)
	{
		_putchar(*(s + (l - 1)));
			l--;
	}
	_putchar('\n');
}
