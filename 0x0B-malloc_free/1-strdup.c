#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: the string
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	i++;
	if (str == NULL)
		exit(0);
	s = malloc(i * sizeof(char));
	if (!s)
		exit(0);
	for (j = 0 ; j < i ; j++)
	{
		s[j] = str[j];
	}
	return (s);
}