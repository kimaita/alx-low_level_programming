#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated memory space with concatenated string or
 *	   NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len, s1_len, s2_len;
	char *concat;

	s1_len = (s1 == NULL) ? 0 : strlen(s1);
	s2_len = (s2 == NULL) ? 0 : strlen(s2);
	len = s1_len + s2_len;
	concat = malloc((sizeof(char) * len) + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		*(concat + i) = *(s1 + i);
	}
	for (j = 0; j < s2_len; j++)
	{
		*(concat + i) = *(s2 + j);
		i++;
	}
	*(concat + i) = '\0';
	return (concat);

}
