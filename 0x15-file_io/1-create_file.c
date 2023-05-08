#include "main.h"


/**
 * create_file - makes new file
 * @filename: name of file
 * @text_content: text to be written to file
 * Return: 1 if successful -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int openf;
	int readf = 0;
	int writef;

	if (filename == NULL)
		return (-1);
	openf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (openf == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (readf = 0; text_content[readf] != '\0';)
		readf++;
	writef = write(openf, text_content, readf);
	if (writef == -1)
		return (-1);
	close(openf);
	return (1);
}
