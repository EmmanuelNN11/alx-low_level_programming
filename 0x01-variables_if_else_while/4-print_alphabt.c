#include <stdio.h>

/**
 * main - code outputs the alphabet with the exception of e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alpha;
	char e;
	char q;

	e = 'e';
	q = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != e && alpha != q)
	putchar(alpha);
	}
	putchar('\n');

	return (0);

}

