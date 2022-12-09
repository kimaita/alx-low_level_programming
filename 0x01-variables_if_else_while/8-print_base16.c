#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';
	char x = 'a';
	char nline = '\n';

	while (n <= '9')
		putchar(n++);
	while (x <= 'f')
		putchar(x++);
	putchar('\n');
	return (0);
}
