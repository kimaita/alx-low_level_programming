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
 *_abs - computes the absolute value of an integer
 *@int: integer to get absolute value
 *
 *Return: the absolute value of n
 */
int _abs(int n);

/**
 *_isupper - checks if character is uppercase
 *@c: character to check
 *
 *Return: 1 if c uppercase. 0 otherwise.
 */
int _isupper(int c);

/**
 *_isdigit - checks if the character is a digit (0-9)
 *@c: the character to check
 *
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 *_strlen - function to find length of a string
 *@s: pointer to the string
 *
 *Return: the string's length
 */
int _strlen(char *s);

/**
 *_puts - prints a string then a new line to stdout
 *@str: pointer to the string
 *
 */
void _puts(char *s);

/**
 *_strcpy - copied the string pointed to by src to dest
 *@dest: pointer for buffer to copy into
 *@src: pointer for string to copy
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 *_atoi - converts a string to an integer
 *@s: pointer to the string
 *
 *Return: the integer
 */
int _atoi(char *s);

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
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory area
 * @n: bytes of memory area to fill with b
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy  - function that copies a memory area
 * @dest: pointer to memory area to copy to
 * @src: pointer to memory area to copy from
 * @n: number of bytes to copy from src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - function that locates a character in a string
 * @s: the string to search in
 * @c: the character to search for
 *
 *Return: pointer to the first occurence of c in s if present, or
 * NULL if c is not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to string to search through
 * @accept: pointer to characters to match
 *
 * Return: number of initial bytes in s also in accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: pointer to string containing bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *  NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 *_strstr - fumction that locates a substring
 *@haystack: string to search through
 *@needle: substring to find
 *
 *Return: pointer to the beginning of the located substring
         * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle);

#endif
