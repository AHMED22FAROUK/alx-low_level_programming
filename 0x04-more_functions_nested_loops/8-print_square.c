#include "main.h"
/**
 * print_square - print square shape
 * Description: it print squer
 * @size: a var of the size of aquare
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int x = 0;

			while (x < size)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
