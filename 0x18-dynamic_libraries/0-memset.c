#include "main.h"

/**
**_memset - A function that fills a memory area with a constant
*@s: memory area to fill
*@b: constant char
*@n: operation index or number of times to fill memory area
*Return: return (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
