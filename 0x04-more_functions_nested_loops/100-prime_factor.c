#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor
 *
 * of the number 612852475143.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	long prime_f = 612852475143, div;

	while (div < (prime_f / 2))
	{
		if ((prime_f % 2) == 0)
		{
			prime_f /= 2;
			continue;
		}

		for (div = 3; div < (prime_f / 2); div += 2)
		{
			if ((prime_f % div) == 0)
				prime_f /= div;
		}
	}

	printf("%ld\n", prime_f);

	return (0);
}
