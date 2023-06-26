#include "main.h"
#include <stdio.h>
/**
 * _strlen - get the length of a string
 * Return: length
 * @s: string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	;
	{
	return (x);
	}
}
