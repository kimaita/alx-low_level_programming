#include "main.h"
#include "2-strlen.c"

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

	l = _strlen(src);

	for (i = 0; i <= l; i++)
	{
		if (i == l)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);
	}
	return (dest);
}
