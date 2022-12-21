#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 *_atoi - converts a string to an integer
 *@s: pointer to the string
 *
 *Return: the integer
 */
int _atoi(char *s)
{
	int i, l, n, num;
	char sign = '+';
	char ints[11] = "";

	l = _strlen(s);
	n = 1;

	for (i = 0; i < l; i++)
	{
		if (*(s + i) == '-')
		{
			if (sign == '-')
				sign = '+';
			else
				sign = '-';
		}
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			ints[n] = *(s + i);
			n++;
		}
		else if ((n != 1))
		{
			ints[n] = '\0';
			break;
		}
	}
	ints[0] = sign;
	sscanf(ints, "%d", &num);
	return (num);
}
