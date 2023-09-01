#include "main.h"
/**
 * get_endianness - gets the endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	return (0);
}
