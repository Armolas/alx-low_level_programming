#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if c is lowercase, otherwise o
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
