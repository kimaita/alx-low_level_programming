#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 *
 */
void print_binary(unsigned long int n)
{
        int i = 31;
        int a, b;

        a = b = 0;
        if (n == 0)
        {
                _putchar('0');
                return;
        }
        while (i >= 0)
        {
                b = (n & (1 << i)) != 0;
                if (b)
                        a = b;
                if (a)
                        _putchar(b + 48);
                i--;
        }
}