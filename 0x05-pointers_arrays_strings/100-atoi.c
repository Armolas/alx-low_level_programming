#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - converts a string to an integer
 * @s: the string
 *
 * return: the integer value of the string
 */
int _atoi(char *s)
{
	int i, j, k, l;

	i = k = 0;
	l = 1;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			l *= -1;
		i++;
	}
	j = 1;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		k = k * 10 + l * (s[j] - '0');
		j++;
	}
	return (k);
}
