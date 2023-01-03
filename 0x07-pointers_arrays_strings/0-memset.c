#include "main.h"

/**
 * _memset - fills a memory area with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte to fill the mamory area
 * @n: number of bytes of the memory area to fill with b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
