#include "main.h"
#include <stdio.h>
/**
 * more_numbers - zero to fourteen real quick
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10 ; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y);
		}
		putchar(x);
	}
	_putchar('\n');
}
