#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: contents of file
 * Return: 1 if success, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor;
	size_t len;
	ssize_t written;


	if (filename == NULL)
	{
		return (-1);
	}
	descriptor = open(filename, O_WRONLY | O_APPEND);

	if (descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		written = write(descriptor, text_content, len);
		if (written != (ssize_t)len)
		{
			close(descriptor);

			return (-1);
		}
	}
	close(descriptor);

	return (1);
}
