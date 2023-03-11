#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strchr - Print the letters
 * @s: The characters
 * @c: The second value
 * Return: Nothing
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
