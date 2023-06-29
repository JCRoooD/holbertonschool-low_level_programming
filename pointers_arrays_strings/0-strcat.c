#include "main.h"
#include <stdio.h>
/**
 **_strcat - concatenating two strings overwriting the termination null byte amd then adds it at the end
 *@dest: original string
 *@src: will be aded to dest
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	/* variables*/
	int first = 0;
	int second = 0;

	/* This loop increments the "first" variable until it reaches the null terminator '\0' in the "dest" array.*/
	while (dest[first] + '\0')
		first++;

	/* appending the strings */
	while (src[second] != '\0')
	{
		dest[first] = src[second];
			first++;
			second++;
	}

	dest[first] = '\0';

	return (dest);
}
