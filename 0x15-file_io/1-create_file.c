#include "main.h"
/**
 * create_file - creates a new file
 * @filename:the nale of the file
 * @text_content: content of the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count, bw;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	for (count = 0 ; text_content[count] ; count++)
		;
	bw = write(fd, text_content, count);
	if (bw < 0)
		return (-1);
	return (1);
}
