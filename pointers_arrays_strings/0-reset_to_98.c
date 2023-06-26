#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - pointer to 98
 * @n: value of pointer
 */
void reset_to_98(int *n)
{
	int p;
	*n = 98;

	n = &p;
	p = 402;
	{
		_putchar(*n);
	}
	_putchar('\n');
}
