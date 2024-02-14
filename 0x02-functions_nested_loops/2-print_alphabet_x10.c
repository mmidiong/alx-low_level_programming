#include "main.h"
/**
 * print_alphabet_x10 - A function that prints all the alphabets in lowercase
 * 10 times
 */
void print_alphabet_x10(void)
{
	int x;
	char c;

	for (x = 1; x <= 10, x++) {
	for (c = 'a'; c <= 'z'; c++) {
	_putchar(c);
	_putchar('\n');
		}
	}
}
