#include "main.h"
/**
 *_strlen_recursion - length recursed
 *@s: pointer to string
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		s++;
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
	return (*s);
}
