#include "main.h"

/**
 * print_square - Prints a square
 *
 * using the character #
 *
 * @size: The size of the square.
 *
 */

void print_square(int size)
{
	int length, breadth;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (breadth = 0; breadth < size; breadth++)
				_putchar('#');
			if (length == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
