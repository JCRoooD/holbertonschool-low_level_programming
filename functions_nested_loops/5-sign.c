#include <stdio.h>
#include "main.h"
/**
 * print_sign - the sign of the number
 * Return: functions will print the sign of a number
 *@n: print the sign of a number
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');

}
