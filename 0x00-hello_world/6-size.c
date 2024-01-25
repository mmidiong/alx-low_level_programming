#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
long long int a;
printf("size of a char: %lu byte(s) \n", (unsigned long)sizeof(char));
printf("size of an int: %lu bytes(s) \n", (unsigned long)sizeof(int));
printf("size of a long int: %lu byte(s) \n", (unsigned long)sizeof(long int));
printf("size of a long long int: %lu byte(s) \n", (unsigned long)sizeof(a));
printf("size of a float: %lu byte(s) \n", (unsigned long)sizeof(float));
return (0);
}
