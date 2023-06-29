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

	while (length < 0 && src[length] != '\0')
		length++;
	{
		dest[length] = src[length];
	}
	while (length < length - 1)
		length++;
	{
		dest[length] = '\0';
	}
	return (dest);
}
