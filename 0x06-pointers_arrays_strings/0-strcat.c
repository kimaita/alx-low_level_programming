#include "main.h"
#include <string.h>
/**
 *_strcat - concatenates two strings
 *@src: pointer to string to be appended
 *dest: pointer to string to append to
 *
 *Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int src_len = strlen(src);
	int dest_len = strlen(dest);
	int i;

	for(i = 0; i < src_len; i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
	*(dest + dest_len + strlen(src)) = '\0';

	return dest;
}
