#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

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
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_letters, write_letters;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	read_letters = read(fd, buf, letters);
	if (read_letters < 0)
		return (0);
	close(fd);
	write_letters = write(STDOUT_FILENO, buf, read_letters);
	if (write_letters != read_letters)
		return (0);

	free(buf);
	return (write_letters);
}
