#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  trints out single digits with commas in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	if (a != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);

}
