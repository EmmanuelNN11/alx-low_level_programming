#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_status - checks opening and closing of a file
 * @status: the status of the fd of the file
 * @filename: name of file
 * @gate: opening or closing
 * @descriptor: file descriptor
 * Return: void
 */

void check_status(int status, int descriptor, char *filename, char gate)
{
	if (gate == 'C' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}

	else if (gate == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	else if (gate == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}


/**
 * main - copies one file to another
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int src;
	int dest;
	int displayed = 1024;
	int written;
	int close_src;
	int close_dest;
	unsigned int gate = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_status(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, gate);
	check_status(dest, -1, argv[2], 'W');
	while (displayed == 1024)
	{
		displayed = read(src, buf, sizeof(buf));
		if (displayed == -1)
			check_status(-1, -1, argv[1], 'O');
		written = write(dest, buf, displayed);
		if (written == -1)
			check_status(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_status(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_status(close_dest, dest, NULL, 'C');

	return (0);
}

