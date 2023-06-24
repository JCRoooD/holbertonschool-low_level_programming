#include "main.h"
#include <stdio.h>
/**
 * print_line - drawing a straight line
 * @n: number of underscores
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int g;

		for (g = 1; g <= n; g++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
