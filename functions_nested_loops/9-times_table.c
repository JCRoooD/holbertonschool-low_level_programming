#include "main.h"
#include <stdio.h>
/**
 * times_table - nine times table
 */
void times_table(void)
{
	int c, r;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (c == 0)
			{
				putchar('0');
				continue;
			}
		}
			if ((c * r) >= 10)
			{
			putchar(32);
			putchar(44);
			putchar(c % 10 + '0');
			putchar(c / 10 + '0');
			}
			else
			{
				putchar(32);
				putchar(44);
				putchar(44);
				putchar(r * 1 '0');
				putchar(r * 1 '0');
			}
	putchar('\n');
	}
}
