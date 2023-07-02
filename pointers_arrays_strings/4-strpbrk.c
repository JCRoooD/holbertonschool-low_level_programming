#include "main.h"
/**
 **_strbrk - string for any of a set of bytes.
 *@s: pointer
 *@accept: char pointer
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		k = 0;

		while (accept[k])
		{
			if (*s == accept[k])
			{
				return (s);
			}
			k++;
		}
		s++;
	}
	return (0);
}
