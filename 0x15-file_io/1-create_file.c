#include "main.h"
#include <fcntl.h>

/**
 * create_file - function that creates a file
 * @filename: pointer to name of file to create
 * @text_content: pointer to string to write to file
 *
 * Description: The created file must have the permissions: rw- --- ---.
 * If the file already exists, do not change the permissions and truncate it
 *
 * Return: 1(SUCCESS)
 *	  -1(FAILURE): NULL filename, failed write/creation
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (fd);

	write_count = write(fd, text_content, sizeof(text_content));
	if (write_count < 0)
		return (write_count);
	return (1);
}