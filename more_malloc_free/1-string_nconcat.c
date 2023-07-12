#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenating 2 strings
 *@s1: first char pointer
 *@s2: second char pointer
 *@n: unsigned variable
 *Return: null if empty string otherwise return newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1;
	unsigned int length2;

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

	if (n >= length2)

		n = length2;

	str1 = malloc(length1 + n + 1);

	if (str1 == NULL)
	{
		return (NULL);
	}

	memcpy(str1, s1, length1);

	memcpy(str1 + length1, s2, n);

	str1[length1 + n] = '\0';

	return (str1);
}
