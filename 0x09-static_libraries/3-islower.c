#include "main.h"

/**
 *_islower - main function
 *@c: character to check
 *
 *Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
	int n = 0;

	if (c >= 'a' && c <= 'z')
		n = 1;
	return (n);
}
