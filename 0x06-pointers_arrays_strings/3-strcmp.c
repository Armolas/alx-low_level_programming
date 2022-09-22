#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: returns 0 if the strings are the same, positive if s1 is
 *greater than s2 and negative if s2 is greater than s1
 */
int _strcmp(char *s1, char *s2)
{
	int i, value = 0;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
		}
		break;
	}
	return (value);
}
