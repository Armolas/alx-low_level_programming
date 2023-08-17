#include <stdio.h>
#include <stdlib.h>
/**
 * print_codes - prints the opcodes
 * @first: start of opcode
 * @numb: nymber of bytes to print
 */
void print_codes(const unsigned char *first, int numb)
{
	int i;

	for (i = 0; i < numb; i++)
	{
		printf("%02x", first[i]);
	}
	printf("\n");
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1 or 2
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int numb = atoi(argv[1]);

	if (numb < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *start = (unsigned char *)main;

	print_codes(start, numb);
	return (0);
}
