#include "main.h"

/**
 * flip_bits -the number of bit to be fliped from one number to another
 * to get from number to another
 * @n: the first number
 * @m: and second number
 * Return: always the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		current = exclusive >> z;
		if (current & 1)
			count++;
	}

	return (count);
}
