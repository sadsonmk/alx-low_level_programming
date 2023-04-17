#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initiliazes a variable of type struct dog
 * @d: is the struct dog type
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(1);
		return (0);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
