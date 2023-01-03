#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - function that writes character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer to the memory area
 *@b: constant byte to fill the memory area
 *@n: bytes of memory area to fill with b
 *
 *Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);
#endif
