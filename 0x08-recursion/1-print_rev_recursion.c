#include "main.h"
/**
 * _print_rev_recursion - This is a function that reverses the string
 *
 * @s: This is a parameter
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
