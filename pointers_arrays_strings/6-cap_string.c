#include "main.h"
/**
 *cap_string - capitaize string
 *@x: char pointer
 *Return: char x
 */
char *cap_string(char *x)
{

	int counter = 0;
	int capi = 32;
	char sepa[13] = {',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', ' ', '\t', '\n'};
	int val = 0;

	while (x[counter] != '\0')
	{
		if (x[counter] >= 'a' && x[counter] <= 'z' && counter == 0)
		{
			x[counter] = x[counter] - capi;
		}

		while (val < 13)
		{
			if (x[counter] == sepa[val])
			{
				if (x[counter + 1] >= 'a' && x[counter] <= 'z')
				{
					x[counter + 1] = x[counter + 1] - capi;
				}
			}
			val++;
		}
		counter++;
	}
	return (x);
}
