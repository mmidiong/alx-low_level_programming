#include "main.h"
#include <stdlib.h>

/**
 * print_binary - A function that prints bin represenatation of a n.
 * @n: integer.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
