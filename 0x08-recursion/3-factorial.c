#include "main.h"

/**
 * factorial - This is a function to return 
 *the factor of n
 *
 * @n: parameter
 *
 * Return: This is the end of the program
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}

	return (0);
}
