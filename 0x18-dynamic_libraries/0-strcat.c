#include "main.h"

/**
* *_strcat - A function tha concatenate two strings
* @dest : string to append to
* @src: string to append
*
* Return: Return pointer to resultant string
*/

char *_strcat(char *dest, char *src)
{
	int n;
	int len = _strlen(dest);

	for (n = 0; src[n] != '\0'; n++, len++)
	{
		dest[len] = src[n];
	}

	return (dest);
}
