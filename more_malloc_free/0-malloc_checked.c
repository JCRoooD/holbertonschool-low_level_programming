#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: unsigned value
 *Return: exit
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
