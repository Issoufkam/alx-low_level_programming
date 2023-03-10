#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - Print the letters
 * @dest: The characters
 * @src: The second value
 * @n: The value
 * Return: Nothing
 */

char _strcat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

