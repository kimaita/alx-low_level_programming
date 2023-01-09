#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments, usually at least 1
 * @argv: pointer to vector of arguments
 *
 * Return: 0 (success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	/*(void) argc; - substitutable for ___attribute___((unused))*/
	printf("%s\n", argv[0]);
	return (0);
}
