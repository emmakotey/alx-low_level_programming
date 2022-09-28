#include "main.h"
/**
 * _sqrt - This a description
 * @x: A number
 * @y: A number
 * Return: Returns the sum of the values
 */
int _sqrt(int x, int y)
{
	int sum;

	sum = x - y;
	if (sum < 0)
		return (-(y / 2) - 1);
	if (sum == 0)
		return (1);
	else
		return (1 + _sqrt(sum, y + 2));
}
/**
 * _sqrt_recursion - This is square root
 * @n: This is a radiating number
 * Return: Output result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
