#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cc = 'a';
	char nline = '\n';

	while (cc <= 'z')
		putchar(cc++);
	putchar(nline);
	return (0);
}
