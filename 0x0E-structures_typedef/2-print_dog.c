#include "dog.h"
#include <stdio.h>

/**
 * print dog - function that prints a struct dog
 * @d: dog struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}