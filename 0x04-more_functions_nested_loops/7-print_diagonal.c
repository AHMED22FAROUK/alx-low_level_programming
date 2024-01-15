#include "main.h"
/**
 * print_diagonal - print shape
 * Description: print some shape with _
 * @n: the number didicated to the shape
 *
 */
void print_diagonal(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			int x = 1;

			while (x <= i)
			{
				_putchar(' ');
				x++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
