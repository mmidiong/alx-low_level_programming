#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *  _islower  - A function that checks if letters of the alphabet
 * are in lowercase
 * @c: character to be checked
 * Return: Return 1 if c is lowercase otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}
