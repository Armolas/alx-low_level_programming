#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	i = i + n +1;
	s = (char *) malloc(i * sizeof(char));
	if (!s)
		exit(0);
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0 ; j < n && s2[j] != '\0' ; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
