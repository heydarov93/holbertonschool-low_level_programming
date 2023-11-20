#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct
 * @name: name of the dog (char *)
 * @age: age of the dog (float)
 * @owner: name of the owner (char *)
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
