#include "main.h"

/**
 * _puts_recursion - Print string
 * @c: the string to print
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
	s++;
	_puts_recursion;
}
