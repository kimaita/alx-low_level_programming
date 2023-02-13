#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: pointer to filename of text file
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters that could be read and printed, or
 *      0 if: -the file could not be opened/read
 *            -filename is NULL
 *            -write failed or does not write the expected number of bytes
 *
 */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* #ifndef _MAIN_H_ */
