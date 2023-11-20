#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct for dog
 * @name: name of the dog (pointer to the char)
 * @age: age of the dog (float)
 * @owner: name of the owner of the dog (pointer to the char)
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
