#include "main.h"

/**
 *string_toupper - changes all lowercase letters in a string to uppercase
 *@c: pointer to the string
 *
 *Return: pointer to the capitalised string;
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i))
	{
		if ((*(c + i) >= 'a') && (*(c + i) <= 'z'))
			*(c + i) = *(c + i) - 32;
		i++;
	}

	return (c);
}
