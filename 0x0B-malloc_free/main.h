#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific character
 * @size: size of array to create
 * @c: character to populate array
 *
 * Return: pointer to the array or
 *	   NULL if size = 0 or on failure
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *  in memory containing a copy of a string
 * @str: pointer to string to duplicate
 *
 * Return: pointer to the duplicated string or
 *	   NULL if str is NULL or insufficient memory available
 */
char *_strdup(char *str);

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated memory space with concatenated string or
 *	   NULL on failure
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - function that returns a pointer to a 2D array of integers(0)
 * @width: array dimension
 * @height: array dimension
 *
 * Return: pointer to array or
 *	   NULL on failure or height or width is <= 0
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - function that frees a 2D grid previously created by alloc_grid
 * @grid: the previously created 2D grid
 * @height: grid dimension
 *
 */
void free_grid(int **grid, int height);

/**
 * argstostr - function that concatenates all the program's arguments
 * @ac: argument count
 * @av: array of argument pointers
 *
 * Description: each argument is followed by a \n in the new string
 *
 * Return: pointer to the new string
 *	   NULL on failure or ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av);

/**
 * strtow - function that splits a string into words
 * @str: pointer to string to print
 *
 * Description:
 *   Each element of this array should contain a single word, null-terminated
 *   The last element of the returned array should be NULL
 *   Words are separated by spaces
 *
 * Return: pointer to array of strings(words)
 *	   NULL on failure or str is empty or NULL
 */
char **strtow(char *str);

#endif
