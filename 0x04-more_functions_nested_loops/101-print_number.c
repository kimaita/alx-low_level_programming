#include "main.h"
#include<stdbool.h>

/**
 *print_number - prints an integer using _putchar
 *@num: integer to be printed
 *
 */
void print_number(int num)
{
	int i;
	bool isValid = false;
	unsigned int n;

	if (num == 0)
		_putchar('0');
	else
	{
		n = num;
		if (num < 0)
		{
			_putchar('-');
			 n = -((unsigned int)num);
		}
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
}
