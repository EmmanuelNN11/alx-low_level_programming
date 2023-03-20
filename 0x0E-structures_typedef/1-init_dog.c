#include <stdlib.h>
#include "dog.h"

/**
 * dog_init - initializes a var of type struct dog
 * @d: pointer to struct dog initialize
 * @name: name initialize
 * @age: age initialize
 * @owner: owner initialize
 */

void dog_init(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
