#include "main.h"

/**
 *puts2 - prints every other character of a string,
 *starting with the first character
 *@str: the string's pointer
 *
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str += 2;
	}
}
