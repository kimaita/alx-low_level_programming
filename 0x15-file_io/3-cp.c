#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int read_from_file(char *filename, void *buffer);
void write_to_file(char *filename, void *buffer);

/**
 * main - driver code to read from and write into files
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: always 0(success)
 */
int main(int argc, char **argv)
{
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);

	if (buffer != NULL)
	{
		if (read_from_file(argv[1], buffer))
			write_to_file(argv[2], buffer);
	}

	return (0);
}

/**
 * read_from_file - reads a file's contents into a buffer
 * @filename: pointer to filename of file to read
 * @buffer: buffer to hold the read bytes of data
 *
 * Return: number of bytes read
 */
int read_from_file(char *filename, void *buffer)
{
	int fd;
	ssize_t read_letters;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	read_letters = read(fd, buffer, 1024);
	if (read_letters < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (read_letters);
}

/**
 * write_to_file - writes into a file from a buffer
 * @filename: pointer to filename of file to write into
 * @buffer: buffer to hold the bytes of data
 *
 * Return: number of bytes written
 */
void write_to_file(char *filename, void *buffer)
{
	int fd;
	ssize_t write_count;

	fd = open(filename,
		  O_CREAT | O_WRONLY | O_TRUNC,
		  S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	write_count = write(fd, buffer, 1024);
	if (write_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
