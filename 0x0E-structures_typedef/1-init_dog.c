#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function initailizes variables in a struct
 * @d: Pointer to the struct
 * @name: The name pointer
 * @age: The dog's age
 * @owner: The owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
