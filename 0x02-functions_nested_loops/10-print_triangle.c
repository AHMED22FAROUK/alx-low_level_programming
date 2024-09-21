#include "main.h"
/**
 * print_triangle - print a triangle shape
 * @size: the size of the parameter
 *
 *Description: this func takes a parameter and print
 *the shape
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar('#');
	}
	else if (size > 1)
	{
		int row, dash, dot;

		for (row = 1; row <= size; row++)
		{
			dash = row;
			dot = size - dash;
			for (; dot > 0; dot--)
			{
				_putchar(' ');
			}
			for (; dash > 0; dash--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
