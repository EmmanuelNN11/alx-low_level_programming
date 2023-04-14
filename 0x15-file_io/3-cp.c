#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error_exit - prints out an error message with an exit code
 * @error_code: the error code
 * @error_message: the message
 * Return: void
 */

void print_error_exit(int error_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(error_code);
}

/**
 * main - entry code
 * @argc: argument
 * @argv: argument
 * Return: 0 if Successful
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t displayed, written;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error_exit(97, "Usage: cp file_from file_to");
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((displayed = read(file_from, buf, BUFFER_SIZE)) > 0)
	{
		written = write(file_to, buf, displayed);
		if (written == -1 || written != displayed)
		{
			print_error_exit(99, "Error: Can't write to file");
		}
	}
	if (displayed == -1)
	{
		print_error_exit(98, "Error: Can't read from file");
	}
	if (close(file_from) == -1 || close(file_to == -1))
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n",
				file_from == -1 ? file_to : file_from);
		exit(100);
	}
	return (0);
}
