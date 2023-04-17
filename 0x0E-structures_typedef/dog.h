#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a new type with 3 elements
 * @name: name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif /* dog.h */
