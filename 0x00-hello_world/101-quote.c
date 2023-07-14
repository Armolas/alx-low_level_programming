#include <unistd.h>
#include <string.h>
#include <errno.h>
/**
 * main - entry point
 *
 * Return: 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written = write(STDERR_FILENO, message, strlen(message));

	if (bytes_written == -1)
	{
		write(STDERR_FILENO, strerror(errno), strlen(strerror(errno)));
		return (1);
	}

	return (1);
}

