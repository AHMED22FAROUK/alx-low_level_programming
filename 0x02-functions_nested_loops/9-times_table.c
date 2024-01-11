#include "main.h"

int asky(int s);
/**
 * times_table - function print times table
 * Description: it print 0*0 - 0*9 and 0*0 - 9*9
 *
 * Return: return 0
 */
void times_table(void)
{
	int inc = 0;

	for (int i = 0; i <= 9; i++)
	{
		for (int y = 0; y <= 9; y++)
		{
			int z = i * y;

			if (z > 9)
			{
				int second = z % 10;
				int first = z / 10;
				int f = asky(first);
				int s = asky(second);

				_putchar(' ');
				_putchar(f);
				_putchar(s);
				if (y == 9)
				{
					continue;
				}
				_putchar(',');
			}
			else if ((z <= 9 && z > 0) || (inc >= 1 && inc <= 9))
			{
				int mud = asky(z);

				_putchar(' ');
				_putchar(' ');
				if (inc == 9 || inc == 19)
				{
					_putchar(mud);
				}
				else
				{
				_putchar(mud);
				_putchar(',');
				}
			}
			else
			{
				_putchar(48);
				_putchar(',');
			}
			inc++;
		}
		_putchar('\n');
	}
}

/**
 * asky - print assii code
 * Description: it takes a number and retirn its ascii code
 * @s: the numder wanted to be asciii
 *
 * Return: return the askii if success or -1 if faild
 */
int asky(int s)
{
	for (int i = 48; i <= 57; i++)
	{
		if (s == i - 48)
		{
			return (i);
		}
	}
	return (-1);
}
