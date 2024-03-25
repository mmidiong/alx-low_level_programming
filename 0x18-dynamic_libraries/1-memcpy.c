#include "main.h"

/**
**_memcpy - A function that copies memory area
*@src: source memory area
*@dest: destination memory area
*@n:received int the limit
*Return: a pointer to the memory area 'dest'
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
