#include "main.h"
#include <string.h>

/**
 * _strncat - appends n byte(s) of src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: number of characters to append
 *
 * Return: pointer to the new dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, i;

	l1 = strlen(dest);
	for (i = 0 ; i <= n && src[i] != '\0' ; i++)
	{
		dest[l1 + i] = src[i];
	}
	dest[l1 + i] = '\0';
	return (dest);
}
