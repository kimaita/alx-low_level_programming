#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = n % 10;

	printf("Last digit of %d is %d ", n, a);
	if (a > 5)
		printf("and is greater than 5\n");
	else if (a == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
