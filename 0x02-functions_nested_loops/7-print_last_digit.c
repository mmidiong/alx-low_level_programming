#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit- A fucntion that prints the last digit of a number.
 * @n: an integer number.
 *
 * Return: value of the last digit.
*/

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = -1 * (n % 10);
	else
		num = n % 10;

	_putchar(num + '0');
		return (num);
}
