#include "main.h"

/**
 *_isdigit - A function that checks if an input is a single digit
 *@c: character to be checked
 *Return: return (1) if isdigit else return (0)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
