#include "main.h"
#include <string.h>

/**
 *_strncpy - copies a string like strncpy does
 *@dest: pointer ro string to copy to
 *@src: pointer to string to copy
 *@n: number of bytes to copy
 *
 *Return: pointer to resultant string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = strlen(src);
	int i = 0;

	while (i < n)
	{
		if (i > src_len)
			*(dest + i) = 0;
		else
			*(dest + i) = *(src + i);
		i++;
	}
	if (src_len < n)
		*(dest + src_len) = '\0';
	return (dest);
}
