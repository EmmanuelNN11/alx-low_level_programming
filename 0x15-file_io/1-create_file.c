#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if successful, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	int written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (descriptor == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		written = write(descriptor, text_content, strlen(text_content));
		if (written == -1)
		{
			close(descriptor);
			return (-1);
		}
	}
	close(descriptor);

	return (1);
}
