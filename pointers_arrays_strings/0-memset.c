#include "main.h"
/**
 **_memset - fills memory with constant byte
 *@s: pointer to string
 *@b: constant byte
 *@n: bytes of memory
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
