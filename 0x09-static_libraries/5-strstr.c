#include "main.h"

/**
 *_strstr - locates a substring in a string
 *@haystack: the string to search through
 *@needle: the substring to search for
 *
 *Return: pointer to beginning of located substring, NULL if absent
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	int n, same;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		n = same = 0;
		if (*haystack == *(needle + n))
		{
			start = haystack;
			same = 1;
			while (*(needle + n))
			{
				if (*(haystack + n) != *(needle + n))
				{
					same = 0;
					break;
				}
				n++;
			}
			if (same)
				return (start);
		}
		else
		{
			start = 0;
		}
		haystack++;
	}
	return (start);
}
