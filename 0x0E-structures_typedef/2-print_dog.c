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
	
	}
	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
