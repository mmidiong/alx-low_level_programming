#include "main.h"

/**
 *_isupper - A functions that checks if a character is uppercase or lowercase
 *@c: character entered
 *Return: (1) if character is uppercase else return (0)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
