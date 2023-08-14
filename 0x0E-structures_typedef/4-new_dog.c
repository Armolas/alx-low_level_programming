#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - adds a new dog profile
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: 0 or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(struct dog));
	if (!new_d)
		return (NULL);
	new_d->name = (char *) malloc(strlen(name) + 1);
	if(!new_d->name)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	new_d->name = name;
	new_d->age = age;
	new_d->owner = (char *) malloc(strlen(owner) + 1);
        if(!new_d->owner)
        {
                free(new_d->owner);
                free(new_d);
                return (NULL);
        }
        new_d->owner = owner;
	return (new_d);
}
