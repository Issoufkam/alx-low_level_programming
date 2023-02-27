#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: first integer
 * @n: second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
