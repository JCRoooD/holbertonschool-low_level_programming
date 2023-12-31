#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creating an array of chars
 *@size: size of array
 *@c: characters
 *Return: null if 0 other wise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
