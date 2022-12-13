#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase
 *
 *return: 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch++);
	}
	_putchar('\n');
}
