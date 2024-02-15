#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * int _islower(int c) - A function that checks if letters of the alphabet
 * are in lowercase
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}
