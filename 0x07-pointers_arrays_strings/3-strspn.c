#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 **_strspn - A function that gets the length of a prefix substring.
 * @s: pointer to the null-terminated byte string to be analyzed.
 * @accept: pointer to the null-terminated byte string that contains the,
 * characters to search for.
 *
 * Return:  number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, j;

	for (length = 0; *(s + length) != '\0'; length++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + length) == *(accept + j))
			{
				break;
			}
		}
		if (!*(accept + j))
			break;
	}
	return (length);
}
