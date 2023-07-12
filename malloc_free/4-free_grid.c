#include "main.h"
#include <stdlib.h>
/**
 *free_grid - freeing a 2 dimensional array
 *@grid:  pointer
 *@height: represents columns
 */
void free_grid(int **grid, int height)
{
	int i;
	int **table = grid;


	if (grid == NULL)
	{
		i = 0;

		while (i < height)
		{
			free(table[i]);
			i++;
		}
		free(table);
	}
}
