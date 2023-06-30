#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reversing the content of an array of integers
 *@a: pointer
 *@n: number of elements
 */
void reverse_array(int *a, int n)
{
	int size = 0;
	int k;

	while (size < n-- / 2)

	{
		k = a[n];
		a[n] = a[size];
		a[size] = k;
		size++;
	}
	k = size - 1;
}
