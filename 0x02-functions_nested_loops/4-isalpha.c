#include "main.h"

/**
 * _islower - checks for uppercase characters
 * @c: the arguement of the function
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
