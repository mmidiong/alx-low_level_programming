#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_sign - A function that checks the sign on an integer
 * @n: integer to be checked
 * Return: return 1 if x is greater than zero, 0 if x is zero
 * and -1 if x is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+1);
		return (1);
	}

	else if (n > 0)
	{
		_putchar(0);
		return (-1);
	}
	else
	{
		_putchar(-1);
		return (0);
	}
	
	_putchar('\n');
}
