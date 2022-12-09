#include<stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char cc = 'a';
	char nline = '\n';
	char CC = 'A';

	while (cc <= 'z')
		putchar(cc++);
	while (CC <= 'Z')
		putchar(CC++);
	putchar(nline);
	return (0);
}
