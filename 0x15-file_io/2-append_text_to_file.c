#include "main.h"


/**
 * append_text_to_file - appends text at the end
 * @filename: name of the file
 * @text_content: string to be added
 * Return: 1 if successful -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openf;
	int readf = 0;
	int writef;

	if (filename == NULL)
		return (-1);
	openf = open(filename, O_WRONLY | O_APPEND);
	if (openf == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (readf = 0; text_content[readf];)
			readf++;
		writef = write(openf, text_content, readf);
		if (writef == -1)
			return (-1);
	}
	close(openf);

	return (1);
}


