#include "main.h"

/**
 *print_times_table - prints times table for a number
 *@n: number to generate times table
 *
 */
void print_times_table(int n)
{
	int i, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n; i++)
		{
			p = n * i;
			if (p != 0)
			{
				if (p / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (p / 100 == 0)
				{
					_putchar(' ');
				}
				_putchar(p + '0');
				if (i == n)
					break;
			}
			else
			{
				_putchar(p + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
