#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX
 * @filename: file to read from
 * @letters: letters to be read
 * Return: number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wrt, rd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);
	if (wrt == -1)
		return (0);

	close(fd);
	free(buff);

	return (wrt);
}
