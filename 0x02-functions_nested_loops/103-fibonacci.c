#include<stdio.h>

/**
 *main - entry point
 *
 *Return: 0 (success)
 */
int main(void)
{
	long int n, n1, n2;
	int sum;

	n = 0;
	n1 = 1;
	n2 = sum = 2;
	while (n <= 4000000)
	{
		n = n1 + n2;
		if (n % 2 == 0)
			sum += n;
		n1 = n2;
		n2 = n;
	}
	printf("%d\n", sum);
	return (0);
}
