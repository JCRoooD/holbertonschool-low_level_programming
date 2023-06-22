#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _abs -function that computes absolute value of an integer
 *Return: absolute value of an integer
 *@n: absolute value integer
 */

int _abs(int n)
{
	int i;

	i = (n * (-1));

		if (n < 0)
		{
			return (i);
		}
		else
			return (n);

}
