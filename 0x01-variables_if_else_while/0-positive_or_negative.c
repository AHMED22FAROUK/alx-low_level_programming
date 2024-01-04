#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry point functon
 *
 * Description: This function prints the value of n variable and determine
 * if it was positive or negative
 * Return: it return 0 is it success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
