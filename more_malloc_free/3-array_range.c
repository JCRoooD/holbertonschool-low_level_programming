#include "main.h"
#include <stdlib.h>
/**
 *array_range - contains array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to an int array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = min;

	while (i <= max)
	{
		ptr[i - min] = i;
		i++;
	}
	return (ptr);
}
