#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenating 2 strings
 *@s1: first char pointer
 *@s2: second char pointer
 *Return: null if empty string otherwise return newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;

	char *str1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);

	length2 = strlen(s2);

	str1 = malloc(length1 + length2 + 1);

	if (str1 == NULL)
	{
		return (NULL);
	}

	memcpy(str1, s1, length1);

	memcpy(str1 + length1, s2, length2);

		return (str1);
}
