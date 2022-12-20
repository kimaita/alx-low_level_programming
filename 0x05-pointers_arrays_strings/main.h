#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 *swap_int - swaps the values of two integers
 *@a: pointer to first integer
 *@b: pointer to second integer
 *
 */
void swap_int(int *a, int *b);
/**
 *_strlen - function to find length of a string
 *@s: pointer to the string
 *
 *Return: the string's length
 */
int _strlen(char *s);
/**
 *_puts - prints a string then a new line to stdout
 *@str: pointer to the string
 *
 */
void _puts(char *str);
/**
 *print_rev - prints a string in reverse then a new line
 *@s: pointer to the string
 *
 */
void print_rev(char *s);
/**
 *rev_string - reverses a string
 *@s: pointer to the string to reverse
 *
 */
void rev_string(char *s);
/**
 *puts2 - prints every other character of a string starting with the first
 *@str: pointer to the string
 *
 */
void puts2(char *str);
/**
 *puts_half - prints half of a string then a new line
 *@str: pointer to the string
 *
 */
void puts_half(char *str);
/**
 *print_array - prints n elements of an array
 *@n: number of elements to be printed
 *@a: the array of integers
 *
 */
void print_array(int *a, int n);
/**
 *_strcpy - copied the string pointed to by src to dest
 *@dest: pointer for buffer to copy into
 *@src: pointer for string to copy
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);
#endif
