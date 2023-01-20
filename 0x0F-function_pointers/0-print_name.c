#include "function_pointers.h"

/**
 * print_name - prints a given name using a given function
 * @name: name to be printed
 * @f: pointer to function to be used
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
