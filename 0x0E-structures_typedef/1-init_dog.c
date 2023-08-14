#include "main.h"
/**
 * init_dog - initializes a dog profile
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
