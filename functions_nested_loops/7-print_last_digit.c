#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit -last digit value
 *Return: value of last digit
 *@n:last digit value will be printed
 */
int print_last_digit(int n)
{

	n = n % 10;
	_putchar(n);

	return(abs (n));
}
