#include<stdio.h>

/**
 *main - entry point
 *
 *Return: 0 (success)
 */
int main(void)
{
	double n, n1, n2;
	int i;

	n1 = 1;
	n2 = 2;
	printf("%.0f, %.0f, ", n1, n2);
	for (i = 0; i < 96; i++)
	{
		n = n1 + n2;
		if (i == 95)
			printf("%.0f", n);
		else
			printf("%.0f, ", n);
		n1 = n2;
		n2 = n;
	}
	putchar('\n');
	return (0);
}
