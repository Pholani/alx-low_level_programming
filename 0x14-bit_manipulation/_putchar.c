#include "main.h"
#include <unistd.h>
/**
 * _putchar -This writes the letter or char c to stdout
 * @c: is the char to print
 * Return: On success always return 1.
 * On error, -1 is returned,as well as errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

