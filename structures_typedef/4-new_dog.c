#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates new dog based on struct
 * @name: name for the new dog (char *)
 * @age: age of the dog (float)
 * @owner: owner of the dog (char *)
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
