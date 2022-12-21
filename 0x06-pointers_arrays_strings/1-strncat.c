#include "main.h"
#include <string.h>

/**
 *_strncat - concatenates n bytes of a string to another
 *@dest: pointer to string to concatenate to
 *@src: pointer to string to concatenate
 *@n: number of bytes to concatenate
 *
 *Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + dest_len + i) = *(src + i);
		i++;
	}

	if (src_len < n)
		*(dest + dest_len + n) = '\0';
	return (dest);
}
