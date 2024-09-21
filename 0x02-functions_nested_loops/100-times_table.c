#include "main.h"

void check(int z);
/**
  * print_times_table - print times tablel for a number
  * @n: number of time table
  * Description: takes an argument as input to make a
  * time table
  */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y == 0)
					_putchar(z + '0');
				else
				{
					check(z);
				}
			}
			_putchar('\n');
		}
	}
}

/**
  * check - make a check statement
  * @z: number to be checked
  *
  * Description: this func takes a number and compare it
  * to another num and prints specific space and the number
  */
void check(int z)
{
	if (z < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + z);
	}
	else if (z >= 10 && z < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
	}
	else if (z >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((z / 100) + '0');
		_putchar(((z / 10) % 10) + '0');
		_putchar((z % 10) + '0');
	}
}
