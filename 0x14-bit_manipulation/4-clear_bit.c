#include "main.h"

/**
 * clear_bit - the function sets value of a bit to 0 at a given index
 * @n: points to the number to be changed
 * @index:an index of the bit to clear
 * Return: 1 for success and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

