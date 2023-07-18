#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - function that executes a function
 *@array: pointer to array
 *@action: function to be called
 *@size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array != NULL && action != NULL)

		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
}
