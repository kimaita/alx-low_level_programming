#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of characters
 *@s: string to be searched
 *@accept: set of characters to be matched
 *
 *Return: pointer to the byte in s matching any of c, NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i))
		{
			if (*s == *(accept + i))
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
