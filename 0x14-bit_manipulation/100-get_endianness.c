#include "main.h"

/**
 * get_endianness - to check the endianness
 * lana ngizofaka isintu
 * Return:always 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return (*c);
}

