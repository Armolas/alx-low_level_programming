#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	i = i + j + 1;
	s = (char *) malloc(i * sizeof(char));
	if (!s)
		exit(0);
	if (s1 != NULL)
	{
		for (j = 0 ; s1[j] != '\0' ; j++)
			s[j] = s1[j];
	}
	if (s2 != NULL)
	{
		for (i = 0 ; s2[i] != '\0' ; i++)
		{
			s[j] = s2[i];
			j++;
		}
	}
	s[j] = '\0';
	return (s);
}
