#include "main.h"
#include <stdio.h>
/**
 *puts_half - half of the string
 *@str: string of characters
 */
void puts_half(char *str)
{
	int length = 0;
	int even = 0;
	int odd = 0;

	while (*(str + length))
		length++;

	if ((length % 2) == 0)
	{
		even = length / 2;

		while (str[even] != 0)
		{
			_putchar(str[even]);
			even++;
		}
	}
	else
	{
		odd = (length + 1) / 2;

		while (odd < length - 1)
		{
			_putchar(str[odd]);
			odd++;
		}
	}
	_putchar('\n');
}
