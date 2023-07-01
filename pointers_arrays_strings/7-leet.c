#include "main.h"
/**
 *leet - encoding to 1337
 *@str: pointer to string
 *Return: s
 */
char *leet(char *str)
{
	char *ptr = str;
	char replacements[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == letters[i] || *ptr == letters[i] - 'a' + 'A')
			{
				*ptr = replacements[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
