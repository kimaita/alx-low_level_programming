#include "main.h"
#include <string.h>

/**
 *_strcmp - compares two strings like strcmp
 *@s1: pointer to first string
 *@s2: pointer to second string
 *
 *Return: 0 if s1 matches s2
 * <0 if s1 is less than s2
 * >0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = diff = 0;

	while (*(s1 + i))
	{
		diff = *(s1 + i) - *(s2 + i);
		if (diff == 0)
			i++;
		if (diff != 0)
			break;
	}
	return (diff);
}
