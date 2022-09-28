#include "main.h"
/**
 * is_prime - prime
 * @x: number
 * @y: number
 * Return: result 0 not prime 1 prime
 * is_prime_number - verifies that the number is prime
 * @n: verify number
 * Return: result 0 not prime 1 prime
 */
int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
