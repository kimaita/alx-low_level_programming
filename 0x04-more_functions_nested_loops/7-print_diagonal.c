#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times \ is drawn
 *
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
