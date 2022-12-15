#include "main.h"

/**
 *print_number - prints an integer using _putchar
 *@n: integer to be printed
 *
 */
void print_number(int n)
{
	int i;

	n = (long) n;

	if ( n < 0)
	{
		_putchar('-');
		n = -n;

	for (i = (int) 10e8; i >= 1; i /= 10)
	{
		if ((n / i) != 0 )
			_putchar((n / i) + '0');
		n = n % i;
	}


}
