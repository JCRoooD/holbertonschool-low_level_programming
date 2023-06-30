#include "main.h"
/**
 *cap_string - capitaize string
 *@x: char pointer
 *Return: char x
 */
char *cap_string(char *x)
{

	int counter = 0;
	char sepa[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	int val;

	while (x[counter] != '\0')
	{
		if (counter == 0 && x[counter] >= 'a' && x[counter] <= 'z')
		{
			x[counter] -= 32;
		}
		val = 0;
		while (val < 13)
		{
			if (x[counter] == sepa[val])
			{
				if (x[counter + 1] >= 'a' && x[counter] <= 'z')
				{
					x[counter + 1] -= 32;
				}
			}
			val++;
		}
		counter++;
	}
	return (x);
}
