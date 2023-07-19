#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
/**
 *int_index - searching for an integer
 *@array: pointer to an array
 *@size: number of elements in the array
 *@cmp: compare function
 *Return: -1 if no element matches otherwise index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
