#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: rows
 *@height: columns
 *Return: Null if failure or pointer if succesfull
 */
int **alloc_grid(int width, int height)
{
	int **table;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(int *) * height);

	if (table == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		table[i] = malloc(sizeof(int) * width);

		if (table[i] == NULL)
		{
			while (i >= 0)
			{
				free(table[i]);
				i--;
			}

			free(table);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
