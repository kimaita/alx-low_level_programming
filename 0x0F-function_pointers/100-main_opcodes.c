#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the program's opcode
 * @argc: the number of parameters.
 * @argv: array of pointers to the parameters .
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
