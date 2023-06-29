#include "main.h"
#include <stdio.h>
/**
 **_strncat - also concatenating two strings
 *@dest: destination
 *@src: first
 *@n: number of bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int first = 0;
	int length = 0;

	while (dest[length])
		length++;

	while (first < n && src[first] != '\0')
	{
		dest[length + first] = src[first];
		first++;
	}
	dest[length + first] = '\0';

	return (dest);
}
