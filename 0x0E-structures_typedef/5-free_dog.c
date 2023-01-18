#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs i.e. memory allocated for dogs
 * @d: pointer to memory to free
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
