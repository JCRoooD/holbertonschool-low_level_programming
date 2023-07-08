#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit
 * Return: 1 if ci is a digit and 0 if otherwise
 * @c: is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
