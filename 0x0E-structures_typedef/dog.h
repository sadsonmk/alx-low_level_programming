#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a new type with 3 elements
 * @name: name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * struct dog_t - a new name for the type struct dog.
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 */

struct dog_t
{
	char *name;
	char *owner;
	float age;
};

#endif /* dog.h */
