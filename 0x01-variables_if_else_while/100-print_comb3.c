#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int m;

	while (n < '9')
	{
		m = n + 1;
		while (m <= '9')
		{
			putchar(n);
			putchar(m);
			m++;
			if (n == '8')
				break;
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
