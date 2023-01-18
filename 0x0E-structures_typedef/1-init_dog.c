#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initaialises a dog struct variable
 * @d: dog struct to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
