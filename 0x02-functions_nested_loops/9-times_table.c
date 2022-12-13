#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int n, i;

	for (n = 0; n <= 9; n++)
	{
	for (i = 0; i <= 9; i++)
	{
		if ((n * i) / 10 == 0)
		{
			if (i != 0)
				_putchar(' ');
		}
		else
			_putchar(((n * i) / 10) + '0');
		_putchar(((n * i) % 10) + '0');
		if (i == 9)
			break;
		_putchar(',');
		_putchar(' ');
	}
		_putchar('\n');
	}
}
