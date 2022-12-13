#include<stdio.h>

/**
 *main - program entry point
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i, sum;

	i = sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
