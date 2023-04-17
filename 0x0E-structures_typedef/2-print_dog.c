#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - prints a struct dog
 * @d: is a pointer to the struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
		exit(1);
	}
	else if (d->name == NULL)
		printf("Name: (nil)\n");
	/*else if ((*d).age ==  NULL) */
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
