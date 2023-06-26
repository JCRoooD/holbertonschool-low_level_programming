#include "main.h"
#include <stdio.h>
/**
 * _swap_int - swapping values
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	*a = 3;
	*b = 6;
	{
	a = 6;
	b = 3;
	}

}
