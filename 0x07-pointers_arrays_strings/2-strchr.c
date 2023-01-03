#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search in
 * @c: the character to search for
 *
 *Return: pointer to the first occurence of c in f, NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
