#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strpbrk - Print the letters
 * @s: The characters
 * @accept: The second value
 * Return: Nothing
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
