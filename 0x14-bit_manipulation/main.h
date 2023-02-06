#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the binary representation or
 * 0 if b == NULL, or b contains a char not 0 or 1
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert to binary
 *
 */
void print_binary(unsigned long int n);

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer to be searched
 * @index: index of the bit required
 *
 * Return: value of the bit at index or -1(ERROR)
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to integer to have bit set to 1
 * @index: index of bit to be set to 1
 *
 * Return: 1(SUCCESS), OR -1(ERROR)
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to integer to have bit set to 0
 * @index: index of bit to be set to 0
 *
 * Return: 1(SUCCESS), OR -1(ERROR)
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: initial number
 * @m: number to convert to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
#endif /* #ifndef _MAIN_H_ */
