#include "main.h"
#include <stdio.h>

/**
 * main - Print it's name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argv - 1);
	return (0);
}

