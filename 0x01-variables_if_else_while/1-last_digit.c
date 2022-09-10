#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 * */
int main(void)
{
	int n;
	int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (1 > 5)
{
	printf("Last digit of %d and is greater than S\n", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else 
{
	printf('Last digit of %d and is less than 6 and not 0\n", n, l);
}
return (0);

