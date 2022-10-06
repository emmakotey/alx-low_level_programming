#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 *  main - function is something to touch
 *  @argc: n arguments that must be
 *  @argv: args that found
 *  Return: an integer
 */

int main(int argc, char *argv[])

{

unsigned long nul;
int i, j;
	if (argc  != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 46)
			{ printf("Error\n");
			exit(98); }
		}
	}
	nul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", nul);
return (0);
}
