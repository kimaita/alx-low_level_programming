#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds and prints sum of positive numbers
 * @argc: count of arguments
 * @argv: array of pointers to string arguments
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				sum += atoi(argv[i]);
			else
			{
				puts("Error");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
