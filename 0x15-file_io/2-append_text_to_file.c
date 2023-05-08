#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: this is a pointer points to the name of the file
 * @text_content:this is a string to add to the end of the file
 * Return: if function fails or filename is NULL result 1
 *         and if file does not exist the user lacks write permissions -1
 *         Otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	y = open(filename, O_WRONLY | O_APPEND);
	z = write(o, text_content, len);

	if (y == -1 || z == -1)
		return (-1);

	close(y);

	return (1);
}
