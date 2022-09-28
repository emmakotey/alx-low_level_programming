#include "main.h"
/**
 * _pow_recursion - This function returns the
 * value of x raised to the power of y
 *
 * @x: A defined paramter to base
 * @y: A defined parameter of pow
 *
 * Return: This function end's the program
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		x = x * _pow_recursion(x, y);
		return (x);
	}

	return (0);
}
