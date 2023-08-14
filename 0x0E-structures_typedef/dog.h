#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creates a new dog rofile
 * @name: dog name
 * @owner: owner name
 * @age: dog age
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
