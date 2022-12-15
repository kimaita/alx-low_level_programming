#include<stdio.h>

/**
 *main - fizzbuzz up to a 100
 *
 *Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if ( != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
