#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog - creating a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: Owner of the dog
 *Return: null if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs;

	dogs = malloc(sizeof(dog_t));

	if (dogs == NULL)

		return (NULL);

	dogs->name = malloc(strlen(name));
	if (dogs->name == NULL)
	{
		free(dogs);
		return (NULL);
	}
	dogs->owner = malloc(strlen(owner));

	if (dogs->owner == NULL)
	{
		free(dogs);
		return (NULL);
	}

	dogs->name = strdup(name);
	dogs->age = age;
	dogs->owner = strdup(owner);

	return (dogs);
}
