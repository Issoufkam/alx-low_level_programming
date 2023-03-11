#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strstr - Print the letters
 * @haystack: The characters
 * @needle: The second value
 * Return: Nothing
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
