#ifndef MAIN_H
#define MAIN_H
/**
 *_putchar - prints char c
 *@c: char to be printed
 *
 *Return: 0
 */
int _putchar(char c);
/**
 *print_alphabet - prints the alphabet in lowercase
 *
 */
void print_alphabet(void);
/**
 *print_alphabet_x10 - prints the alphabet in lowercase 10 times on a new line
 *
 */
void print_alphabet_x10(void);
/**
 *_islower - checks for a lowercase character
 *@c: char to be checked
 *
 *Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c);
/**
 *_isalpha - checks if the character is alpabetic
 *@c: char to be checked
 *
 *Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c);
/**
 *print_sign - prints the sign of a number
 *@n: the number to be checked
 *
 *Description: prints + if n is positive, 0 if zero, - if less than zero
 *Return:1 if n greater than 0. 0 if zero. -1 if less than 0
 */
int print_sign(int n);
/**
 *_abs - computes the absilute value of an integer
 *@int: integer to get absolute value
 *
 *Return: the absolute value of n
 */
int _abs(int);
/**
 *print_last_digit - function that prints the last digit of a number
 *@int: the integer
 *
 *Return: the value of the last digit
 */
int print_last_digit(int);
/**
 *jack_bauer - prints every minute of Jack Bauer's day
 *
 */
void jack_bauer(void);
/**
 *times_table - function that prints the 9 times table, starting with 0
 *
 */
void times_table(void);
/**
 *add - function that adds two integers
 *@int:integers to add
 *
 *Return: sum if the integers
 */
int add(int, int);
/**
 *print_to_98 - prints numbers up to 98
 *@n: number to start printing at
 *
 */
void print_to_98(int n);
/**
 *print_times_table - prints the n times table
 *@n: number to generate times table
 *
 */
void print_times_table(int n);
#endif
