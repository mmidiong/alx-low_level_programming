#include <stdio.h>
/**
 * main - A program that prints all possible combination of three digit
 * numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundreds, tens, ones;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if  (hundreds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');

	return  (0);
}
