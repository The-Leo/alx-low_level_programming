#include <stdio.h>

/**
 *  main - Enty point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long llong;
	long long llonglong;
	float ffloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(llong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(ffloat));

	return (0);

}
