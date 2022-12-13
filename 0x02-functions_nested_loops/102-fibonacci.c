#include<stdio.h>

/**
 *main - entry point
 *
 *Return: 0 (success)
 */
int main(void)
{
	long int n, n1, n2;
	int i;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld, ", n1, n2);
	for (i = 0; i < 48; i++)
	{
		n = n1 + n2;
		if (n == 47)
			printf("%ld", n);
		else
			printf("%ld, ", n);
		n1 = n2;
		n2 = n;
	}
	putchar('\n');
	return (0);
}
