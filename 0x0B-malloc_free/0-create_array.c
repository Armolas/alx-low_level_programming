#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize with
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char *) malloc(size * sizeof(char));
	int i;

	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
