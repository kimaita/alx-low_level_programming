#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
			_putchar(ch++);
		_putchar('\n');
	}
}
