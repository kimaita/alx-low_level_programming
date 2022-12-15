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
 *_isupper - checks if character is uppercase
 *@c: character to check
 *
 *Return: 1 if c uppercase. 0 otherwise.
 */
int _isupper(int c);
/**
 *_isdigit - checks if the character is a digit (0-9)
 *@c: the character to check
 *
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);
/**
 *mul - multiplies two integers
 *@a: the first integer
 *@b: the second integer
 *
 *Return: product of a and b
 */
int mul(int a, int b);
/**
 *print_numbers - prints 0-9 followed by a new line
 *
 */
void print_numbers(void);
/**
 *print_most_numbers - prints 0-9, skipping 2 and 4
 *
 */
void print_most_numbers(void);
/**
 *more_numbers - prints 0-14 ten times each on a new line
 *
 */
void more_numbers(void);
/**
 *print_line - draws a straight line on terminal using _
 *@n: the number of times _ is printed
 *
 */
void print_line(int n);
/**
 *print_diagonal - draws a diagonal line on the terminal using (\)
 *@n: the number of times \ is printed
 *
 */
void print_diagonal(int n);
/**
 *print_square - prints a square using #
 *@size: dimensions of the square
 *
 */
void print_square(int size);
/**
 *print_triangle - prints a triangle using #
 *@size: size of the triangle(base, height)
 *
 *Example: print_triangle(3);
 *   #
 *  ##
 * ###
 */
void print_triangle(int size);
/**
 *print_number - prints an integer using _putchar
 *@n: the integer to print
 *
 */
void print_number(int n);
#endif
