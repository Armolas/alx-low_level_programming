#include "main.h"
/**
 * read_textfile - reads a textfile and write it to stdout
 * @filename: The name of the file to be read
 * @letters: number of characters to be read
 * Return: number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0, br;
	char *str = malloc(sizeof(char) * letters);

	if (!filename)
	{
		free(str);
		return (count);
	}
	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		free(str);
		return (count);
	}
	br = read(fd, str, letters);
	str[br + 1] = '\0';
	count = write(STDOUT_FILENO, str, br);
	if (count < 0)
	{
		free(str);
		close(fd);
		return (0);
	}
	free(str);
	close(fd);
	return (count);
}
