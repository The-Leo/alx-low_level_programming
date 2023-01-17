#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type doog
 * @d: pointer to struct dog
 * @name: name to initialize
 * @age: age to intilaize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
