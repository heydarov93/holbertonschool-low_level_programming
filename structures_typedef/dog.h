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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
