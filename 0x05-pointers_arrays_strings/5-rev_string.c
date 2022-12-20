#include "main.h"
#include "2-strlen.c"

/**
 *rev_string - reverses a string
 *@s: pointer to the string
 *
 */
void rev_string(char *s)
{
	int l = _strlen(s);
	char temp;

	while (l / 2)
	{
		temp = *s;
		*s = *(s + (l - 1));
		*(s + (l - 1)) = temp;
		s++;
		l -= 2;
	}
}
