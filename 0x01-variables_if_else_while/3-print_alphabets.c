#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
        char c;
	char e;

        c = 'a';
	e = 'A';

        while
        (c <= 'z') {
        putchar(c);
        c++;
        }
	while 
	(e <= 'Z') {
	putchar(e);
	e++;
	}
        
	putchar('\n');
        return (0);
}
