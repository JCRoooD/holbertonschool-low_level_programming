#include "main.h"
/**
 **leet - encoding to 1337
 *@s: pointer to string
 *Return: s
 */
char *leet(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == 'a' || *p == 'A')
			*p = '4';
		else if (*p == 'e' ||  *p == 'E')
			*p = '3';
		else if (*p == 'o' ||  *p == 'O')
			*p = '0';
		else if (*p == 't' ||  *p == 'T')
			*p = '7';
		else if (*p == 'l' ||  *p == 'L')
			*p = '1';
		p++;
	}
	return (s);
}
