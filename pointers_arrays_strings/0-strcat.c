#include "main.h"
#include <stdio.h>
/**
 **_strcat - concatenating two strings
 *@dest: string 1
 *@src: string 2
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	/* variables*/
	int size = 0;
	int x;

	/* checking size of dest */
	while (dest[size])
		size++;

	/* appending the strings */
	x = 0;
	while (x < size + 1 && src[x] != '\0')
	{
		dest[size + 1] = src[x];
			x++;
	}
	return (dest);
}
