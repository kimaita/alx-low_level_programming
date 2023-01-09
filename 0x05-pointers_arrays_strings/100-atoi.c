#include "main.h"

/**
 *_atoi - converts a string to an integer
 *@s: pointer to the string
 *
 *Return: the integer
 */
int _atoi(char *s)
{
	int i;
	unsigned int num;
	char sign = '+';

	num = i = 0;

	for (i = 0; *(s + i); i++)
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
			if (num == 0)
				num = *(s + i) - '0';
			else
				num = ((num * 10) + *(s + i)) - '0';
		}
		else if ((num != 0))
			break;
	}
	num = (sign == '-') ? -num : num;
	return (num);
}
