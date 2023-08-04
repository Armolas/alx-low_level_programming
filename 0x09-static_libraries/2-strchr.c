#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character to find
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
	{
		for (i = 0 ; s[i] != '\0' ; i++)
			;
		return (s + i);
	}
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
