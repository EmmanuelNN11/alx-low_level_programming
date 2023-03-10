#include <stdio.h>
#include "main.h"

/**
 * main - prints out each argument including the first
 * @argc: this is the number of arguments
 * @argv: is the array of ellements
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
