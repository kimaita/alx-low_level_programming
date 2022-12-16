#include "main.h"

/**
 *print_times_table - prints times table for a number
 *@n: number to generate times table
 *
 */
void print_times_table(int n)
{
	int i, j, p;

	p = 0;
	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				p = j * i;
				if (i == 0)
					_putchar('0');
				else
				{
				if (p / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p / 100 == 0)
				{
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else if (p / 100 > 0)
				{
					_putchar(p / 100 + '0');
					_putchar((p % 100) / 10 + '0');
					_putchar(p % 10 + '0');
				}
				}
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
