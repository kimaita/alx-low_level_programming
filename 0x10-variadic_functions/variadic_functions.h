#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of the n parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 *
 * Descrption: print (nil) if a string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments passed
 *
 * Description: format can be:
 *	c: char
 *	i: integer
 *	f: float
 *	s: char * (if the string is NULL, print (nil) instead
 *	any other char should be ignored
 * The function can be called like: print_all("ceis", 'B', 3, "stSchool");
 * which results in: B, 3, stSchool
 *
 */
void print_all(const char * const format, ...);

#endif /* ifndef _VARIADIC_FUNCTIONS_H_ */
