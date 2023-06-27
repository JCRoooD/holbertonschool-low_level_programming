#include "main.h"
#include <stdio.h>
/**
 * print_rev - printing reverse string
 * @s: string pointer
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
