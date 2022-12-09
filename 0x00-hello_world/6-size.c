#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char%lu byte(s)\n", (unasigned long) sizeof(d));
	printf("size of an int%lu byte(s)\n", (unasigned long) sizeof(a));
	printf("size of a long int %lu byte(s)\n", (unasigned long) sizeof(b));
	printf("size of a long long int%lu byte(s)\n", (unasigned long) sizeof(c));
	printf("size of a float%lu byte(s)\n", (unasigned long) sizeof(f));

	return (0);

}
