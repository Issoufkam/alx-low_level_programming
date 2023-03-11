#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memcpy - Print the letters
 * @dest: The characters
 * @src: The second value
 * @n: The value
 * Return: Nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

