#include "main.h"
#include<stdio.h>

/**
 *print_to_98 - prints numbers up to 98
 *@n: number to start printing from
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		_putchar('\n');
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		_putchar('\n');
	}

	_putchar('\n');
}
