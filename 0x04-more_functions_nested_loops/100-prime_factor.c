#include<stdio.h>
#include<math.h>

/**
 *prime_factor - finds the largest prime fcator of a number
 *@num: number to find prime factor
 *
 *Return: largest prime factor
 */
int prime_factor(long int num);
/**
 *main - tests prime_factor for 612852475143
 *
 *Return: always 0
 */
int main(void)
{
	long int a;

	a = 612852475143;
	printf("%d\n", prime_factor(a));
	return (0);
}

/**
 *prime_factor - finds the largest prime fcator of a number
 *@num: number to find prime factor
 *
 *Return: largest prime factor
 */
int prime_factor(long int num)
{
	int i = 2;


	if (num % i == 0)
	{
		return (prime_factor(num / i));
	}
	while (i <= sqrt(num))
	{
		i++;
		if (num % i == 0)
			return (prime_factor(num / i));
	}
	return (num);
}
