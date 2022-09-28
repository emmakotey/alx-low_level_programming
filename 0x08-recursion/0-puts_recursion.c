#include "main.h"
/**
 * _puts_recursion - This function is similar to the puts function
 *
 * @s: This is a parameter
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
