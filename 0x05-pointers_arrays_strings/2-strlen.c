#include "main.h"
/**
 * _strlen - returns the length of string s
 * @s: the string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		j++;
	return (j);
}
