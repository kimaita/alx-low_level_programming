#include "main.h"
/**
 * _strspn - gets the number of initial bytes of a string in a given string
 * @s: string to search through
 * @accept: string with the characters to look for
 *
 *Return: number of initial bytes of s in c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, found;

	count = 0;

	while (*s)
	{
		i = found = 0;
		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				found = 1;
				break;
			}
			i++;
		}
		count += found;
		if (found == 0)
			return (count);
		s++;
	}
	return (count);
}
