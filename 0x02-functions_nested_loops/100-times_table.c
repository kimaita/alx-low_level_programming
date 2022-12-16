#include "main.h"

/**
 *print_times_table - prints times table for a number
 *@n: number to generate times table
 *
 */
void print_times_table(int n)
{
	int i, j, p, a, b, c;

	p = a = b = c = 0;
	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				p = j * i;
				a = p / 100;
				b = (p % 100) / 10;
				c = p % 10;
				if (i == 0)
					_putchar('0');
				else
				{
					if (a > 0)
						_putchar(a + '0');
					else
						_putchar(' ');
					if (b > 0 || (b == 0 && a > 0))
						_putchar(b + '0');
					else
						_putchar(' ');
					_putchar(c + '0');
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
