#include "main.h"
/**
 * print_triangle - triangle maker.
 * @size: the parameter
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = a; y < size; y++)
			{
				_putchar(' ');
			}
			for (y = 1; x <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
