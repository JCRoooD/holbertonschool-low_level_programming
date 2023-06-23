#include "main.h"
#include <stdio.h>
/**
 * times_table - nine times table
 * @c: columns
 * @r: rows
 */
void times_table(void)
{
	int c, r;

	for (r >= 0; r <= 9; r++)
	{
		for (c >= 0; c <= 9; c++)
		{
			putchar(r * c);
			putchar(32);
			putchar(44);
		}
	}
	putchar('\n');
}
