#include "main.h"

/**
 * create_file - reads text file and prints to POSIX
 * @filename: file to read from
 * @text_content: letters to be read
 * Return: 1 if successful -1 if not..
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wrt = write(fd, text_content, len);
		if (wrt == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	else
	{
		return (-1);
	}
	close(fd);
	return (1);
}
