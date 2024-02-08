#include "main.h"

/**
 * flip_bits - A function that returns number of bits needed to flip to get
 * from one number to another.
 * @n: unsigned long int.
 * @m: unsigned long int.
 *
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int XOR_nm = n ^ m;

	/* Using Brian Kernighan’s algorithm to count set bits */
	while (XOR_nm)
	{
		/* clear the least significant bit */
		XOR_nm = XOR_nm & (XOR_nm - 1);
		count++;
	}

	return (count);
}
