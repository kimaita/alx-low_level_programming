#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the binary representation or
 * 0 if b == NULL, or b contains a char not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, i, len;

	if (b == NULL)
		return (0);

	dec = 0;
	len = strlen(b) - 1;
	for (i = 0; i <= len; i++)
	{
		if (*(b + i) == '0' || *(b + i) == '1')
			dec += ((*(b + (len - i)) - 48) * (raise(2, i)));
		else
			return (0);
	}
	return (dec);
}

/**
 * raise - raises a base to a power
 * @base: base value
 * @exp: exponent value
 *
 * Return: base raised to the power exp
 */
unsigned int raise(int base, unsigned int exp)
{
	unsigned int i, result;

	result = 1;

	if (exp == 0)
		return (result);

	for (i = 1; i <= exp; i++)
		result *= base;

	return (result);
}
