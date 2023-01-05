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
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: pointer to the string
 *
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer to the string
 *
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of string s
 */
int _strlen_recursion(char *s);

/**
 * factorial - function that returns the factorial of a number
 * @n: number to find factorial
 *
 *
 * Return: factorial of n or -1 for n < 0(error)
 */
int factorial(int n);

/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: number to raise
 * @y: power factor
 *
 * Return: the result of x power y, -1 for y < 0
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to obtain square root
 *
 * Return: the natural square root, -1 if no natural square root exists
 */

int _sqrt_recursion(int n);
/**
 * is_prime_number - function that checks if integer is a prime number
 * @n: integer to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n);
#endif
