#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a dog struct
 * @d: pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
