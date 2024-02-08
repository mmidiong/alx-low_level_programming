#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @index: index to be set.
 * @n: unsigned long int.
 *
 * Return: 1 if it worked or -1 if it failed.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned long int indexes have 64 nums*/
	if (index > 63)
	{
		return (-1);
	}
	/* use bitwise and & operator to clear */
	/* use number &= ~(1UL << n) clear a bit */
	*n &= ~(1UL << index);

	return (1);
}
