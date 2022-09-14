#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: 0 Always
 */
int main(void)
{

	char string[8] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(string[n]);
		++n;
	}
	_putchar(10);
	return (0);
}
