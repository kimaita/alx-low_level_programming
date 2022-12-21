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
 *_strcat - function to concatenate two strings
 *@src: pointer to string to be appended
 *@dest: pointer to string to append to
 *
 *Return: pointer to concatenated dest
 */
char *_strcat(char *dest, char *src);

/**
 *_strncat - function to concantenate two strings
 * using n bytes of the second string
 *@src: pointer to string to be appended
 *@dest: pointer to string to append to
 *@n: bytes of src to concatenate with dest
 *
 *Return: pointer to concatenated dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 *_strncpy - function to copy a string exactly like strncpy
 *@src: pointer to string to copy from
 *@dest: pointer to string to copy to
 *@n: bytes of string to be copied
 *
 *Return: pointer to resultant string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 *_strcmp - compares two strings like strcmp
 *@s1: pointer to first string
 *@s2: pointer to second string
 *
 *Return: integer less than 0 if s1 less than s2
 *0 if s1 matches s2
 *integer greater than 0 if s1 greater than s2
 */
int _strcmp(char *s1, char *s2);
#endif
