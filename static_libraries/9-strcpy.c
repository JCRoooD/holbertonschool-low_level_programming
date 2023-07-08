#include "main.h"
#include <stdio.h>
/**
 **_strcpy - copying a string to a pointer
 *@dest: pointer 1
 *@src: pointer 2
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
