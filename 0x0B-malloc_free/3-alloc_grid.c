#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: the width of the array
 * @heigth: the length of the array
 * Return: return pointer to 2 dimensional aaray
 */

int **alloc_grid(int width, int heigth)
{
	int **a;
	int x;
	int y;

	if (width <= 0 || heigth <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * heigth);

	if (a == NULL)
		return (NULL);
	for (x = 0; x < heigth; x++)
	{
		a[x] = malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
				free(a[x]);
			free(a);
			return (NULL);
		}
	}
	for (x = 0; x < heigth; x++)
	{
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	}
	return (a);
}
