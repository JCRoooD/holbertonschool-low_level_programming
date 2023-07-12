#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocating memory for array
 *@nmemb: number of elements
 *@size: bytes of each element
 *Return: if it fails or is 0 return null otherwise return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
