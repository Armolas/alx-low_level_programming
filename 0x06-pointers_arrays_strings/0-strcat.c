#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: returns a pointer to the new destination string.
 */
char *_strcat(char *dest, char *src)
{
	int l1, l2, i;

	l1 = _strlen(dest);
	l2 = _strlen(src);

	for (i = 0 ; i <= l2 ; i++)
	{
		dest[l1 + i] = src[i];
	}
	return dest;
}
