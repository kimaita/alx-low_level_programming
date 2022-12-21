#include "main.h"

/**
 *cap_string - capitalises each word of a string
 *@c: pointer to the string
 *Separators of words: space, tabulation, new line, , ; . ! ? " ( ) { and }
 *
 *Return: pointer to the capitalised string
 */
char *cap_string(char *c)
{
	int i, sep, n;

	i = sep = 0;

	while (*(c + i))
	{
		n = *(c + i);
		if (n == 9 || n == 10 || n == 32 || n == 33 || n == 34 ||
				n == 40 || n == 41 || n == 44 || n == 46 ||
				n == 59 || n == 63 || n == 123 || n == 125)
			sep = 1;
		else if (sep)
		{
			if (n >= 97 && n <= 122)
				*(c + i) -= 32;
			sep = 0;
		}
		i++;
	}
	return (c);
}
