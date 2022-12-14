#include "main.h"

/**
 *print_last_digit - prints last digit of a number
 *@n: number to get last digit of
 *
 *Return: the last digit of n
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
