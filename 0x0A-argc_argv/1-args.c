#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */
int main(int argc, char* argv[] __attribute__ ((unused)))
{
	int i;

	for (i = 0 ; i < argc ; i++)
		;
	printf("%d\n", i - 1);
	return (0);
}
