#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* the function that swap the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
