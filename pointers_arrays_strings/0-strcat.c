#include "main.h"
#include <stdio.h>
/**
 **_strcat - concatenating two strings overwritin the null
 *@dest: original string
 *@src: will be aded to dest
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	/* variables*/
	int first = 0;
	int second = 0;

	/*increments the "first" variable until it reaches the '\0' in "dest" array.*/
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
