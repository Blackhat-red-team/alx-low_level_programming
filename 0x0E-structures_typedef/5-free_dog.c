#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - releases memory set aside for a dog structure
 * @d: free struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
