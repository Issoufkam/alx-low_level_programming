#include "main.h"

/**
 * _pow_recursion - Return the value of x
 * @x: The value to multiply
 * @y: The time to multiply the value
 * Return: x * y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
