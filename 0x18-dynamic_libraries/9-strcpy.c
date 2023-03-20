#include "main.h"

int len(char *s);

/**
 *_strcpy - copies a string from a given source to a destination
 *@dest: pointer for buffer to copy string into
 *@src: pointer for string to copy
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = len(src);

	for (i = 0; i <= l; i++)
	{
		if (i == l)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);
	}
	return (dest);
}

/**
 * len - gets the length of a string
*/
int len(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}
