#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: the string
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *s = (char *) malloc(sizeof(str));
	long unsigned int i;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < sizeof(str) ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
