#include "main.h"
#include <stdio.h>
/**
 * rev_string - reversing a string
 *@s: pointer
 */

void rev_string(char *s)
{
	int length = 0;
	int beg = 0;
	int end = 0;
	char tmp;

	while (*(s + length))
		length++;

	end = length - 1;

	while (beg < length / 2)
	{
		tmp = s[beg];
		s[beg] = s[end];
		s[end] = tmp;
		end--;
		beg++;
	}
}
