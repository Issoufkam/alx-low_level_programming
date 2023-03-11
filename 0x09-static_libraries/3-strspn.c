#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strspn - Print the letters
 * @s: The characters
 * @accept: The second value
 * Return: Nothing
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
