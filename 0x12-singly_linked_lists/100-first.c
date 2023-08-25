#include <stdio.h>

void first_string(void) __attribute__((constructor));
/**
 * first_string - prints a string before main
 */
void first_string(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
