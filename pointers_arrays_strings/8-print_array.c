#include "main.h"
#include <stdio.h>
/**
 * print_array - array of integers
 * @a: array
 * @n: elements
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	while(b < n)
		b++;
	{
		if (b == (n - 1))
		{
			printf("%d", a[b]);
		}
		else
		{
			printf("%d, ", a[b]);
		}
	}
	printf("\n");
}
