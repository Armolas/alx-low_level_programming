#include "main.h"

/**
 * rot13 - encodes a string using the rot13 format
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char F[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char L[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (F[j] == str[i])
			{
				str[i] = L[j];
			}
		}
	}
	return (str);
}
