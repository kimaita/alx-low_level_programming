#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
       	char *nm;
	char *own;

	nm = name;
	own = owner;
	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);
	ndog->name = nm;
 	ndog->age = age;
	ndog->owner = own;
	return (ndog);
}
