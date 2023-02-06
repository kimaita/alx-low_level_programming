#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 *
 */
void print_binary(unsigned long int n)
{
	int i, b, bits;
	unsigned long int a;

	a = n;
	bits = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (a)
	{
		bits++;
		a >>= 1;
	}

	i = bits - 1;
	while (i >= 0)
	{
		b = (n & (1 << i)) != 0;
		_putchar(b + 48);
		i--;
	}
}
