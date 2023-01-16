#ifndef
#define

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory or exit with status 98 on failure
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes if s2 to concatenate to s1
 *
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - function that allocates memory using malloc
 * @nmemb: number of array elements
 * @size: size of each array element
 *
 * Description: memory is set to zero
 * Return: pointer to the allocated memory
 *	   NULL if malloc fails || nmemb == 0 || size == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - function that creates an array of integers
 * @min: first value
 * @max: last value
 *
 * Description: The array created will contain all the values from
 *	min (included) to max (included), ordered from min to max
 * Return: pointer to created array or
 *	   NULL if min > max or malloc fails
 */
int *array_range(int min, int max);
#endif
