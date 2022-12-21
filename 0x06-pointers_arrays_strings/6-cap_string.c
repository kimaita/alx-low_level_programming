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
	int i, n, n1;

	i = 0;

	while (*(c + i))
	{
		n = *(c + i);
		n1 = *(c + i + 1);
		if ((n == 9 || n == 10 || n == 11 || n == 32 || n == 33 ||
			n == 34 || n == 40 || n == 41 || n == 44 || n == 46 ||
				n == 59 || n == 63 || n == 123 || n == 125)
				&& (n1 >= 97 && n1 <= 122))
		{
			*(c + i + 1) -= 32;
		}
		i++;
	}
	return (c);
}
