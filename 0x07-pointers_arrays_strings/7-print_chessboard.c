#include "main.h"

/**
 * print_chessboard - prints out a chess board
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int b;

	for (x = 0; x < 8; x++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[x][b]);
		_putchar('\n');
	}
}

