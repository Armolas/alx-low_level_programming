#include "dog.h"
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
	if(!new_d)
		return (NULL);
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
