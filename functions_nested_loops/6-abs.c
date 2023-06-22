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
	if (n < '0')
	{
		_abs(n);
	}
}
