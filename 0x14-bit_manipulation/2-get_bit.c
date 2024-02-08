#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @index: index of bit.
 * @n: integer.
 *
 * Return: the bit value or -1 if error occured.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	/* for unsigned long int, bit indexes range from 0 to 63 */
	if (index > 63)
		return (-1);

	/* getting bit value */
	bit_value = (n >> index) & 1;

	/* return value of bit */
	return (bit_value);
}
