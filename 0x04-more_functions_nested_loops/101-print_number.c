#include "main.h"
#include<stdbool.h>

/**
 *print_number - prints an integer using _putchar
 *@n: integer to be printed
 *
 */
void print_number(int n)
{
	int i;
	bool isValid = false;

	n = (long) n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	for (i = 10e8; i >= 1; i /= 10)
	{
		if ((n / i) != 0)
		{
			isValid = true;
			_putchar((n / i) + '0');
		}
		else if (isValid)
			_putchar('0');
		n = n % i;
	}


}
