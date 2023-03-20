#include <stdio.h>

/**
 * add - adds two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient of a divided by b
 */
int div(int a, int b)
{

	/* if (b == 0)
	{
		fprintf(stderr, "Division by zero!\n");
		exit(1);
	} */
	return (a / b);
}

/**
 * mod - get the remainder of a divided by b
 * @a: first integer
 * @b: second integer
 *
 * Return: a modulo b
 */
int mod(int a, int b)
{
	/* if (b == 0)
	{
		fprintf(stderr, "Division by zero!\n");
		exit(1);
	} */
	return (a % b);
}
