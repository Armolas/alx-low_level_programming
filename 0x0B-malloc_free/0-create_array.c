#include "main.h"

/**
 * create_array - creates an array of characters and
 * initializes it
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return ('\0');
	a = (char *)malloc(size * sizeof(char));
	for (i = 0 ; i < size ; i++)
	{
		*(a + i) = c;
	}
	return (a);
}
