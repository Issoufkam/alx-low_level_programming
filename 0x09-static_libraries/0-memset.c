#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memset - Print the letters
 * @s: The characters
 * @b: The second value
 * @n: The value
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
