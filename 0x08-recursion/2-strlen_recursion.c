#include "main.h"
/**
 * _strlen_recursion - This function is to count the
 * number of character in the string
 *
 * @s: This is a parameter
 *
 * Return: A return function
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		s++;
		n = n + _strlen_recursion(s);

		return (n);
	}

	return (0);
}
