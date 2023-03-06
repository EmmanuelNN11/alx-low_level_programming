#include "main.h"

/**
 * _memcpy - copies the memory area
 * @src: source
 * @dest: destination
 * @n: number of bites
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int a = n;

	for (; x > a; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
