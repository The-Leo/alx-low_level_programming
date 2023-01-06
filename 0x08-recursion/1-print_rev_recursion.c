#include "main.h"

/**
 * _print_rev_recursion - prints a string, followed by a new line
 * @s: pointer to s.
 */
void _print_rev_recursion(char *s)
{
	int b = 0;

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[b]);
}
