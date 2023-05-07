#include "main.h"

/**
 * get_bit - the function returns the value of a bit at a given index
 * @n:a number to search
 * @index: an index of the bit
 * Angazi ngizoshintsha ini enye
 * Return: always value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

