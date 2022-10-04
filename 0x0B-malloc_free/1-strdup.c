#include "main.h"

/**
 * _strdup - creates new string and copies string there
 * @str: the string to copy
 *
 * Return: Null or pointer to sting copy
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
		return ('\0');
	for (j = 0 ; str[j] ; j++)
		;
	j++;
	a = (char *)malloc(sizeof(char) * j);
	if (a == NULL)
		return (NULL);
	for (i = 0 ; i < j ; i++)
		*(a + i) = str[i];
	return (a);
}
