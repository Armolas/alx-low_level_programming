#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
