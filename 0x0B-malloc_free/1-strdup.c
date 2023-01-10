#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *  in memory containing a copy of a string
 * @str: pointer to string to duplicate
 *
 * Return: pointer to the duplicated string or
 *	   NULL if str is NULL or insufficient memory available
 */
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*(dup + i) = *(str + i);
	}
	*(dup + i) = '\0';
	return (dup);
}
