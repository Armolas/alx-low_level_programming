#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the value of a string to another
 * @dest: the destination of the copy
 * @src: the source of the copy
 *
 * Return: the copied values
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}
