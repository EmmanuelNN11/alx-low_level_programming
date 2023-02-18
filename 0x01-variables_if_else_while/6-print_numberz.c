#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this code outputs numbers of base ten using char
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	putchar('\n');

	return (0);

}
