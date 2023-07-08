#include "main.h"
#include <stdio.h>
/**
 **_strstr - substring to be located
 *@haystack: pointer with varible v
 *@needle: pointer with variable f
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int k = 0;
	int v = 0;

	while (haystack[k] != '\0')
	{
		while (needle[v] != '\0')
		{
			if (haystack[k + v] != needle[v])
				break;
			v++;
		}

		if (needle[v] == '\0')
			return (&haystack[k]);
		k++;
	}
	return (0);
}
