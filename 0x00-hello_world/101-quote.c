#include <stdio.h>

/**
*
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	size_t i = 0;
	char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0 ; i < strlen(str); ++i)
	putchar(str[i]);
	putchar('\n');
	return (1);
}
