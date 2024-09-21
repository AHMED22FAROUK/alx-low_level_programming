#include "main.h"

void check_last_number(int i, int n, int val);

/**
 * print_times_table - a function prints the times table
 * Description: it takes arguemnt between 0 and 15 and prints its times table
 * @n: the times table number
 *
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, sec, value;

		for (i = 0; i <= n; i++)
		{
			for (sec = 0; sec <= n; sec++)
			{
				value = i * sec;
				if (value < 10)
				{
					_putchar(value + '0');
					check_last_number(sec, n, value);
				}
				else if (value >= 10 && value < 100)
				{
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
					check_last_number(sec, n, value);
				}
				else
				{
					 _putchar((value / 100) + '0');
					 _putchar(((value % 100) / 10) + '0');
					 _putchar(((value % 100) % 10) + '0');
					 check_last_number(sec, n, value);
				}
			}
		}
	}
}

/**
 * check_last_number - function check the last number in row
 * @i: the row number
 * @n: the times table number
 * @val: Multiplication number
 * Description: this function checks if the last number to
 * be printed in the is equal the the times table number if
 * they are equal it will print new line and check the Multiplication
 * To determine how many spaces will print
 */
void check_last_number(int i, int n, int val)
{
	if (i == n)
	{
		_putchar('\n');
	}
	else if (val < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (val >= 10 && val <= 99)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		 _putchar(' ');
	}
}
