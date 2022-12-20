#include "main.h"
#include "2-strlen.c"
/**
 *puts2 - prints every other character of a string,
 *starting with the first character
 *@str: the string's pointer
 *
 */
void puts2(char *str)
{
	int i, l;

	l = _strlen(str);
	for (i = 0; i < l; i += 2)
		_putchar(*(str + i));

	_putchar('\n');
}
