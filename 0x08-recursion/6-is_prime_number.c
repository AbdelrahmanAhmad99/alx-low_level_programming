#include "main.h"
int actual_prime(int n, int s);
/**
 * is_prime_number - says if an integer is a prime.
 * @n: number.
 * Return: 1 or 0 .
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime recursively,
 * @n: number.
 * @s: iterator.
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int s)
{
	if (s == 1)
	return (1);
	if (n % s == 0 && s > 0)
	return (0);
	return (actual_prime(n, s - 1));
}
