#include <stdio.h>
#include "main.h"


/**
 * read_textfile - reads a file and prints out the number of letters
 * @letters: number of letters
 * @filename: the file to be tested
 * Return: number of letters or 0 if fail or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	ssize_t f_read;
	ssize_t total = 0;
	char c;

	if (filename == NULL)
	{
		return (0);
	}

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
	{
		return (0);
	}
	while (letters-- > 0 && (f_read = read(descriptor, &c, 1)) > 0)
	{
		if (write(STDOUT_FILENO, &c, 1) != 1)
		{
			close(descriptor);

			return (total);
		}
		total = total + f_read;
	}
	close(descriptor);
	return (total);
}

