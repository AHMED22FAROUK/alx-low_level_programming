#include "main.h"
/**
 * swap_int - swap two numbers
 * Description: swap to variables content
 * @a: parameter
 * @b: parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
