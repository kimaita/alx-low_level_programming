#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to name of the file
 * @text_content: pointer to string to add at the end of the file
 *
 * Return: 1(SUCCESS)
 *	  -1(FAILURE): NULL filename, non-existent file, no write permission
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (fd);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_count = write(fd, text_content, strlen(text_content));
	close(fd);
	if (write_count < 0)
		return (-1);
	return (1);
}
