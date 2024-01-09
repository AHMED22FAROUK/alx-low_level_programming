#include "main.h"

/**
 * print_var - print 2 variable
 * Description: print 2 variables
 * @x: a variable being printed
 * @y: a variable bieng printed
 *
 * Return: return 0
 */
int print_var(int x, int y);

/**
 * jack_bauer - print a cloch
 * Description: prit a clock of minutes and hours using 4 var
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a = 48;

	while (a <= 50)
	{
		int b = 48;

		while (b <= 57)
		{
			int c = 48;

			while (c <= 53)
			{
				int d = 48;

				while (d <= 57)
				{
					print_var(a, b);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					if (a == 50 && b == 51 && c == 53 && d == 57)
					{
						break;
					}
					d++;
				}
				if (a == 50 && b == 51 && c == 53)
				{
					break;
				}
				c++;
			}
			if (a == 50 && b == 51)
			{
				break;
			}
			b++;
		}
		a++;
	}
}
/**
 * print_var - print 2 var
 * Description: print a colon and 2 variables
 * @x: 1 var
 * @y: 1 var
 *
 * Return: return 0
 */
int print_var(int x, int y)
{
	_putchar(x);
	_putchar(y);
	_putchar(':');
	return (0);
}
