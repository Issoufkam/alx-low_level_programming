#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Return if the number is prime
 * @n: thr number to be checked
 * Return: integer
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * is_prime_number - Return if the number is prime
 * @n: thr number to be checked
 * @i: iterate
 * Return: integer
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		return (1);
	return (check_prime(n, i + 1));
}
