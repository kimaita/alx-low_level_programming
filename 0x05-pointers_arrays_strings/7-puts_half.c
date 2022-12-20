#include "main.h"
#include "2-strlen.c"

/**
 *puts_half - prints the second half of a string then a new line
 *@str: the string's pointer
 *
 */
void puts_half(char *str)
{
	int l = _strlen(str);
	int i = (l % 2 == 0) ? (l / 2) : (l + 1) / 2;

	for (; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
