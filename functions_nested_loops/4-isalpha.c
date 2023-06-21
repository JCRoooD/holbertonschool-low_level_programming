#include "main.h"
#include <stdio.h>
/**
 *_isalpha - prints lowercase or uppercase
 *Return: 1 if c is lowercase or uppercase and 0 otherwise
 *@c: upper or lower case print
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if(c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	return (0);
}
