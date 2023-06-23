#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - natural numbers
 *@n: value of integer
 */
void print_to_98(int n)
{
	for (; n != 98 ;)
	{
		if (n <= 98)
		{
			printf("%d, " n);
			n++;
		}
		else if (n >= 98)
		{
			printf("%d, " n);
			n--;
		}
	}
	printf("\n");
}
