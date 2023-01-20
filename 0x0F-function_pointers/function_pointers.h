#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function pointer to printing function
 *
 */
void print_name(char *name, void (*f)(char *));
#endif /* _FUNCTION_POINTERS_H_ */
