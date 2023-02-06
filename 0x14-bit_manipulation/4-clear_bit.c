#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to integer to have bit set to 0
 * @index: index of bit to be set to 0
 *
 * Return: 1(SUCCESS), OR -1(ERROR)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
