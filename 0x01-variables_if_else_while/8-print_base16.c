#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints hexadeximal numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int a;
	char dex;

	for (a = '0'; a <= '9'; a++)
	putchar(a);

	for (dex = 'a'; dex <= 'f'; dex++)
	putchar(dex);
	putchar('\n');

	return (0);

}
