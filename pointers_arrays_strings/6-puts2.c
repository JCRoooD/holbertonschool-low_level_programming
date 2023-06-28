#include "main.h"
#include <stdio.h>
/**
 * puts2 - every other character
 *@str: string for every other character
 */
void puts2(char *str)
{
	int length = 0;
	int e;

	while (*(str + length))
		length++;

	e = 0;

	while (e < length)
	{
		if ((e % 2) == 0)
		{
			_putchar(str[e]);
		}
		e++;
	}
	_putchar('\n');
}
