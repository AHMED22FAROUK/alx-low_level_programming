#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print some array nums
 * @a: this is a pointer to the array
 * @n: the range of elements he wants to print
 *
 * Description: this function will loop through
 * the elements until it reaches the range
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (i < n)
	{
		for (; i < n; i++)
		{
			printf("%d", a[i]);
			if (i != n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
