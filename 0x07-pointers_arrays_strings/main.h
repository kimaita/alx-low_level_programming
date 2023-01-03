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
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory area
 * @n: bytes of memory area to fill with b
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy  - function that copies a memory area
 * @dest: pointer to memory area to copy to
 * @src: pointer to memory area to copy from
 * @n: number of bytes to copy from src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - function that locates a character in a string
 * @s: the string to search in
 * @c: the character to search for
 *
 *Return:
 * pointer to the first occurence of c in s if present
 * NULL if c is not  found
 */
char *_strchr(char *s, char c);
#endif
