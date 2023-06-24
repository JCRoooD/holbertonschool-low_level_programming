#include "main.h"
#include <stdio.h>
/**
 * more_numbers - zero to fourteen real quick
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 14 ; x++)
	{
		for (y = 0; y <= 10; y++)
		{
			_putchar(y);
		}
		_putchar(x);
	}
	_putchar('\n');
}
