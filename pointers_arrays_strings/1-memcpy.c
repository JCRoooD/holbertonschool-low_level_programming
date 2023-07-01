#include "main.h"
/**
 **_memcpy - copying memory
 *@dest: destination
 *@src: source
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while(m < n)
	{
	dest[m] = src[m];
	m++;
	}

return(dest);
}
