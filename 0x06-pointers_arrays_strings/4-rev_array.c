#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: a pointer to the array
 * @n: the number of elements in array
 *
 * Description: the function loops to the half of the
 *array and reverse the array
 */
void reverse_array(int *a, int n)
{
	int x, hold, catch;

	hold = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		catch = *(a + x);
		*(a + x) = *(a + hold);
		*(a + hold) = catch;
		hold -= 1;
	}
}
