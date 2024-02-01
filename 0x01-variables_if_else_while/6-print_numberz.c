#include <stdio.h>
/**
 * main - Emtry point
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x;

	x = 0;
	while (x <= 9)
	{
	putchar(x + '0');
	++x;
	}

	putchar('\n');
	return (0);
}
