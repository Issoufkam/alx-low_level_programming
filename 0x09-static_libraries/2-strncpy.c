#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcpy - Print the letters
 * @dest: The characters
 * @src: The second value
 * @n: The value
 * Return: Nothing
 */

char _strcpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

