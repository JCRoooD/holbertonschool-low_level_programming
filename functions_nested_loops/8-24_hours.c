#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{

	int m;
	int h;

	for (m = 0; m <= 59; m++)
	{
		for (h = 1; h <= 24; h++)
		{
			putchar(h);
		}
		putchar(m);
	}
	putchar('\n');
}
