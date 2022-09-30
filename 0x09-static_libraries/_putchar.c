#include <unistd.h>

/**
 * _puthar - writes the character c  to stdout
 * @c: The character to print
 *
 * Retirm: on success 1
 * on erro, -1 is returned, and error number is 
 * set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
