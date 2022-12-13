#include "main.h"
#include <string.h>

/**
 * _strncpy -> for copying
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);

}

