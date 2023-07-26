#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes of src to be added to dest
 * Return: returns a pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
