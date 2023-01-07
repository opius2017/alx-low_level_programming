#include "main.h"

/**
 * _atoi - a function that converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the string converted
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
