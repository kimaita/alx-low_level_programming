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
 *_strcmp - function to compare two strings like strcmp
 *@s1: pointer to first string
 *@s2: pointer to second string
 *
 *Return: integer less than 0 if s1 less than s2
 *0 if s1 matches s2
 *integer greater than 0 if s1 greater than s2
 */
int _strcmp(char *s1, char *s2);

/**
 *reverse_array - function to reverse the content of an integer array
 *@a: pointer to array
 *@n: number of array elements
 *
 */
void reverse_array(int *a, int n);

/**
 *string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *@c: pointer to the string
 *
 *Return: pointer to the capitalised string
 */
char *string_toupper(char *c);

/**
 *cap_string - function that capitalizes all words of a string
 *@c: pointer to the string
 *Description: Separators of words: space, tabulation, new line,
 *, ; . ! ? " ( ) { and }
 *
 *Return: pointer to the word capitalised string
 */
char *cap_string(char *c);

/**
 *leet - function that encodes a string into 1337
 *@c: pointer to the string
 *Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 *Return: pointer to the encoded string
 */
char *leet(char *c);

/**
 *print_number - function that prints an integer
 *@n: integer to print
 *
 */
void print_number(int n);

/**
 *print_buffer - function that prints a buffer
 *@b: pointer to the buffer
 *@size: bytes of buffer to print
 *
 */
void print_buffer(char *b, int size);
#endif
