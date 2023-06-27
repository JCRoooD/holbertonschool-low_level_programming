#include "main.h"
#include <stdio.h>
/**
 * print_rev - printing reverse string
 * @s: character
 * @length: length of string
 */
void print_rev(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;

	length = length - 1;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
