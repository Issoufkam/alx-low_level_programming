#include "main.h"

/**
 * _puts_recursion - Print string
 * @s: the string to print
 * Return: Nothing
 */

int _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
