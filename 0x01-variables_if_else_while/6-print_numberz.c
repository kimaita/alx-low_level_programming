#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int nline = '\n';

	while (n <= '9')
		putchar(n++);
	putchar(nline);
	return (0);
}
