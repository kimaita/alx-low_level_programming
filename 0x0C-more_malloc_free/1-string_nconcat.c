#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concatenate to s1
 *
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int bytes, i, j;
	char *concat;

	bytes = strlen(s1) + strlen(s2);
	concat = malloc(bytes + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		*(concat + i) = *(s1 + i);
	}
	for (j = 0; j < n; j++)
	{
		*(concat + i) = *(s2 + j);
		i++;
	}
	*(concat + i) = '\0';
	return (concat);
}
