#include "main.h"
/**
 **_strstr - substring to be located
 *@haystack: pointer to v
 *@needle: pointer to f
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int v = 0;
	int f = 0;

	while (haystack[v] != '\0')
	{
		if (haystack[v] == needle[f])
		{
		f++;
		v++;
		}
		break;
	}
	return (0);
}
