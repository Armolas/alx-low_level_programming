#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees all dogs
 * @d: pointer to dog structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
