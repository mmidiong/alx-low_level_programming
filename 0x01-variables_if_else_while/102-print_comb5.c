#include <stdio.h>
/**
 * main - A program that prints all possible combination of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 99; tens++)
	{
		for (ones = 0; ones <= 99; ones++)
		{
			if (tens < ones)
			{
				putchar((tens / 10) + 48);
				putchar((tens % 10) + 48);
				putchar(' ');
				putchar((ones / 10) + 48);
				putchar((ones % 10) + 48);
				if (tens != 98 || ones != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');

	return (0);
}
