#include "main.h"

/**
 * leet - encodes a string
 * @str: string to be encoded
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "aeotl";
	char A[] = "AEOTL";
	char N[] = "43071";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (a[j] == str[i] || A[j] == str[i])
			{
				str[i] = N[j];
			}
		}
	}
	return (str);
}
