#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function pointer to printing function
 *
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - function that executes a given function on each element
 *	of an array
 * @array: array to iterate on
 * @size: size of the array
 * @action: pointer to function to execute
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* _FUNCTION_POINTERS_H_ */
