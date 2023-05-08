#include "main.h"

/**
 * read_textfile - prints out read texts to the output
 * @filename: name of file
 * @letters: number of letters to be output
 * Return: number letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf;
	ssize_t readf;
	ssize_t writef;
	char *tempo;

	if (filename == NULL)
		return (0);
	tempo = malloc(sizeof(char) * letters);
	if (tempo == NULL)
		return (0);
	openf = open(filename, O_RDONLY);
	readf = read(openf, tempo, letters);
	writef = write(STDOUT_FILENO, tempo, readf);
	if (openf == -1 || readf == -1 || writef == -1 || writef != readf)
	{
		free(tempo);
		return (0);
	}
	free(tempo);
	close(openf);
	return (writef);
}

