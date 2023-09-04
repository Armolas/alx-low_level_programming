#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
        int fd1, fd2, br = 0, bw;
        char *buffer;

        if (argc != 3)
        {
                dprintf(2, "Usage: cp file_from file_to\n");
                exit(97);
        }
        fd1 = open(argv[1], O_RDONLY);
        if (fd1 < 0)
        {
                dprintf(2, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }
        fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
        if (fd2 < 0)
        {
                dprintf(2, "Error: Can't write to %s\n", argv[2]);
                exit(99);
        }
        buffer = malloc(sizeof(char) * 1024);
        while(br >= 0)
        {
                br = read(fd1, buffer, 1024);
                bw = write(fd2, buffer, br);
                if(bw < 0)
                        exit(99);
                if(br < 1024)
                {
                        free(buffer);
                        close(fd1);
                        close(fd2);
                        return (0);
                }
	}
	return (0);
}
