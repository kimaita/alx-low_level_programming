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
		if (cc == 'q' || cc == 'e')
		{
			cc++;
			continue;
		}
		else
			putchar(cc++);
	return (0);
}
