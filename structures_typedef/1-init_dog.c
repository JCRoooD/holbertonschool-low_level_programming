#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initializing a variable
 *@d: pointer to d struct
 *@name: pointer to name char
 *@age: integer variable
 *@owner: pointer to owner char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
