#include <stdio.h>

/**
 * main - prints arguments passed
 * @argc: number of arguments
 * @argv: pointer to vector of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
