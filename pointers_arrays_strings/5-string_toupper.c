#include "main.h"
#include <stdio.h>
/**
 *string_toupper - changing lowercase to uppercase
 *@t: pointer to the string
 *Return: t var
 */
char *string_toupper(char *t)
{
	int counter = 0;
	int alphabet = 32;

	while (t[counter] != '\0')
	{
		if (t[counter] >= 'a' && t[counter] <= 'z')
		{
			t[counter] = t[counter] - alphabet;
		}
		counter++;
	}
	return (t);
}
