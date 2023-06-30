#include "main.h"
#include <stdio.h>
/**
 **_strncpy - copying a string
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;

	while (length < n && src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}
	return (dest);
}
