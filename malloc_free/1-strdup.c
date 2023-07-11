#include "main.h"
#include "stdlib.h"
#include <string.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *@str: string to be duplicated
 *Return: null if str is 0, on success retuen pointer
 */
char *_strdup(char *str)
{
	char *allocate;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;

	allocate = malloc(length);

	if (allocate == NULL)
	{
		return (0);
	}

	memcpy(allocate, str, length);

	return (allocate);
}
