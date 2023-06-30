#include "main.h"
#include <stdio.h>
/**
 *_strcmp - function that compares two strings
 *@s1: first string
 *@s2: second string
 *Return: integer
 */
iint _strcmp(char *s1, char *s2)
{
	/*comparing both strings*/
	while (*s1 == *s2)
	{
		/*checks if the character pointed to by s1 is the null terminator ('\0').*/
		if (*s1 == '\0')
		{
			return (0);
		}
			s1++;
			s2++;
	}
	return (*s1 - *s2);
}
