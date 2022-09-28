#include "main.h"

/**
 * _puts_recursion - To print a string followed by a new line
 * @s: character will be  printed
 * Return: returns void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
