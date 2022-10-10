#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
