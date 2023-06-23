#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks uppercase
 * Return: 1 if uppercase and 0 if otherwise
 *@c: uppercase character
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
