#include "main.h"
/**
 * print_alphabet - entry point play the alphabet game
 * Return: Always 0
 */

void print_alphabet(void)
{
	char x;

	for(x = 'a'; x <= 'z'; x++)
		_putchar (x);

	_putchar ('\n');
	return (0);
}
