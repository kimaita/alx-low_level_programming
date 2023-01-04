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
 * pointer to the first occurence of c in s if present, NULL if c is not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to string to search through
 * @accept: pointer to characters to match
 *
 * Return: number of initial bytes in s also in accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: pointer to string containing bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *  NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 *_strstr - fumction that locates a substring
 *@haystack: string to search through
 *@needle: substring to find
 *
 *Return: pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to board
 *
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsum - function that prints the sum of the two diagonals of a
 *  square matrix of integers
 * @a: pointer to matrix
 * @size: array dimensions
 *
 */
void print_diagsums(int *a, int size);

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to string to be replaced
 * @to: char to set pointer value to
 *
 */
void set_string(char **s, char *to);
#endif
