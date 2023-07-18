#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - freeing the doggies
 *@d: pointer to structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
