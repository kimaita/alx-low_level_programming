#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of two integer multiplication
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
	return (0);
}
