#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("(nil)\n");
		return;
	}

	printf(!(d->name) ? "Name: (nil)\n" : "Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf(!(d->owner) ? "Owner: (nil)\n" : "Owner: %s\n", d->owner);
}
