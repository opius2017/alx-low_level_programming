#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the programe
 * followed by a new line
 * @argc: number of command-line arguements
 * @argv: string of arguement passed to the main function
 * Return : Always 0 on success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
