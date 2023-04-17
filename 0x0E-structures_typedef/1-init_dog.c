#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - sets a variable of the struct dog type to zero
 * @d: pointer to initialise struct dog
 * @name: initialise name
 * @age: to initialise age
 * @owner: to initialise the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
