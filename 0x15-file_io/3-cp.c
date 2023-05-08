#include "main.h"


/**
 * tempo - gives 1024 bytes to temporary files
 * @file: name of buffer storing file
 * Return: pointer to tempo
 */

char *tempo(char *file)
{
	char *temp;

	temp = malloc(sizeof(char) * 1024);
	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "cannot write to %s\n", file);
		exit(99);
	}
	return (temp);
}

/**
 * funga - closes up files
 * @file: target file
 */

void funga(int file)
{
	int a;

	a = close(file);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "cannot close descriptor %d\n", file);
		exit(100);
	}
}

/**
 * main - copier of file content
 * @ac: count
 * @av: passed
 * Return: 1 if successful, end if not
 */

int main(int ac, char *av[])
{
	int source;
	int destination;
	int readf;
	int x;
	char *temp;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "use cp source_file destination_file\n");
		exit(97);
	}
	temp = tempo(av[2]);
	source = open(av[1], O_RDONLY);
	readf = read(source, temp, 1024);
	destination = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source == -1 || readf == -1)
		{
			dprintf(STDERR_FILENO, "unreadable file %s\n", av[1]);
			free(temp);
			exit(98);
		}
		x = write(destination, temp, readf);
		if (destination == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "unwritable to %s\n", av[2]);
			free(temp);
			exit(99);
		}
		readf = read(source, temp, 1024);
		destination = open(av[2], O_WRONLY | O_APPEND);
	} while (readf > 0);
	free(temp);
	funga(source);
	funga(destination);
	return (0);
}

