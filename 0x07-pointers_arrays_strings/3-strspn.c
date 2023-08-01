#include "main.h"
/**
 * _strspn- gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix substring
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == ' ')
			return (k);
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] != accept[j])
				continue;
			else
			{
				k++;
				break;
			}
		}
	}
	return (k);
}
