#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @n
 * @n: bytes of the memory area pointed to by @s
 * @s: with the constant byte
 * @c: the character to fill the area
 * Return: a pointer to the memory area @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
