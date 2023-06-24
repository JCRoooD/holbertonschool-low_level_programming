#include "main.h"
#include <stdio.h>
/**
 * print_line - drawing a straight line
 * @n: number of underscores
 */
void print_line(int n)
{

	for (n > 0; n <= 9; n++)
	{
		if (n <= 0)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
