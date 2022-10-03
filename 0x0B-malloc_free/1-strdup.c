#include "main.h"

/**
 * _strdup - creates new string and copies string there
 * @str: the string to copy
 *
 * Return: Null or pointer to sting copy
 */
char *_strdup(char *str)
{
	int a;
	char *a;

	if (str == '\0')
		return ('\0');
	for (i = 0 ; *(str + i) ; i++)
		a[i] = str[i];
	return (a);
}
