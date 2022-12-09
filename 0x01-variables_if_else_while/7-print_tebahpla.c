#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cc = 'z';
	char nline = '\n';

	while (cc >= 'a')
		putchar(cc--);
	putchar(nline);
	return (0);
}
