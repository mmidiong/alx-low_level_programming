#include "main.h"
#include <stdlib.h>

/**
 * _isalpha - A function that checks if the character c is an alphabet
 * @c: the character to be checked
 * Return: Return 1 if c is an alphabet otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);

	else
	return (0);
}
