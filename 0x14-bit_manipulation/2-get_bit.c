#include "main.h"
#include "count_bits.c"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to be searched
 * @index: index of the bit required
 *
 * Return: value of the bit at index or -1(ERROR)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > count_bits(n) - 1)
		return (-1);

	return ((n & (1 << index)) != 0);
}
