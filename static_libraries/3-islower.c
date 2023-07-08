#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks lowercase
 * Return: return 1 if c is lowercase and return 0 otherwise
 * @c: is lowercase prints 1
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
