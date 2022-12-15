#include "main.h"

/**
 *print_line - prints a straight line on the terminal using _
 *@n: number of times _ is printed
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}
	_putchar('\n');
}
