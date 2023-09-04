#include "main.h"
/**
 * append_text_to_file - adds text to end of a text to a file
 * @filename: the file name
 * @text_content: text to be added
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bw, count;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	for (count = 0 ; text_content[count] ; count++)
		;
	bw = write(fd, text_content, count);
	if (bw < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
