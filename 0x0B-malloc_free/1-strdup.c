#include "main.h"

/**
 * _strdup - creates new string and copies string there
 * @str: the string to copy
 *
 * Return: Null or pointer to sting copy
 */
char *_strdup(char *str)
{
	int i;
	char *a;

	if (str == NULL)
		return ('\0');
	a = (char *)malloc(sizeof(str));
	if (a == NULL)
		return (NULL);
	for (i = 0 ; *(str + i) ; i++)
		*(a + i) = str[i];
	return (a);
}
