#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: pointer to vector of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc >= 0)
		printf("%d\n", argc);
	return (0);
}
