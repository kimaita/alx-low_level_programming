#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - tests get_op_func
 * @argc: count of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	char *op;
	int a, b;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		puts("Error");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%i\n", get_op_func(op)(a, b));
	return (0);
}
