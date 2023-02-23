#include <math.h>
#include <stdio.h>

/**
 * main - prints the biggest prime factor of the given number
 * Return: Always 0 (Success)
 */

int main(void)
{
	long a;
	long max_p;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			max_p = number / a;
		}
	}
	printf("%ld\n", max_p);
	return (0);
}
