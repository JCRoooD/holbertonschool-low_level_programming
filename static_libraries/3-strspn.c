#include "main.h"
/**
 *_strspn - prefix substring
 *@s: string
 *@accept: char string
 *Return: q
 */
unsigned int _strspn(char *s, char *accept)
{
	int q = 0;
	int w = 0;
	int c = 0;

	while (s[q] != '\0')
	{
		while (accept[w] != '\0')
		{
			if (s[q] == accept[w])
			{
				c = w;
				w = 0;
				break;
			}
			w++;
		}
		if (s[q] != accept[c])
			break;
		q++;
	}
	return (q);
}
