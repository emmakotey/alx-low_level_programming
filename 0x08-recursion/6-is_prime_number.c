#include "main.h"
/**
 * is_prime - A prime number
 * @x: This is a number
 * @y: This is another number
 * Return: output the result 0 not prime 1 prime
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
/**
 * is_prime_number - for prime number verification
 * @n: to perform number verification
 * Return: output result 0 not prime 1 prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
