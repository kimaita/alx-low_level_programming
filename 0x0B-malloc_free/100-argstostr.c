#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the program's arguments
 * @ac: argument count
 * @av: array of argument pointers
 *
 * Description: each argument is followed by a \n in the new string
 *
 * Return: pointer to the new string
 *	   NULL on failure or ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int char_count, j;
	int i, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	char_count = 0;
	for (i = 0; i < ac; i++)
	{
		char_count += (strlen(av[i]) + 1);
	}
	str = malloc(char_count + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			*(str + k) = av[i][j];
			k++;
		}
		*(str + k) = '\n';
		k++;
	}
	*(str + k + 1) = '\0';
	return (str);
}
