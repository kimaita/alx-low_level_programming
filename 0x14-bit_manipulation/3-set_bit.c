#include "main.h"
#include "count_bits.c"
#include <stddef.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to integer to have bit set to 1
 * @index: index of bit to be set to 1
 *
 * Return: 1(SUCCESS), OR -1(ERROR)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 31)
		return (-1);
	*n |= (1 << index);
	return (1);
}
