#include "main.h"
int seperate(int t);
void print_to_98(int n);

/**
 * print_to_98 - print numbers to 98
 * Description: takes a number and print from it to 98
 * @n: number being printed from to 98
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				seperate(n);
				_putchar(',');
				_putchar(' ');
				n = n + 1;
			}
			else
			{
				seperate(n);
				if (n == 98)
				{
					_putchar('\n');
					n++;
					break;
				}
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}
	}
	else if (n == 0 || n <= 98)
	{
		if (n == 98)
		{
			seperate(98);
			_putchar('\n');
		}
		else
		{
			while (n <= 98)
			{
				seperate(n);
				if (n == 98)
				{
					_putchar('\n');
					n++;
					break;
				}
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			seperate(n);
			if (n == 98)
			{
				_putchar('\n');
				n--;
				break;
			}
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}

/**
 * asky - return the ascii value
 * Description: takes integer and return its value
 * @x: parameter being its ascii printed
 *
 * Return: return  the ascii value if success else -1
 */
int asky(int x)
{
	int k = 0;
	int i = 48;

	while (i <= 57)
	{
		if (x == k)
		{
			return (i);
		}
		k++;
		i++;
	}
	return (-1);
}
/**
 * seperate - print the ascii value
 * Description: it takes integer and seperate its degits the use asky
 * @t: the parameter beingg seperated and print its asky
 *
 * Return: return 0 is success
 */
int seperate(int t)
{
	int iden = 0;
	int second = 0;
	int first = 0;
	int x = 0;
	int y = 0;

	if (t < 0)
	{
		if ((-t) <= 9)
		{
			iden = asky(-t);
			_putchar('-');
			_putchar(iden);
			return (0);
		}
		else
		{
			second = (-t) % 10;
			first = (-t) / 10;
			x = asky(first);
			y = asky(second);
			_putchar('-');
			_putchar(x);
			_putchar(y);
			return (0);
		}
	}
	else if (t <= 9)
	{
		iden = asky(t);
		_putchar(iden);
		return (0);
	}
	else if (t > 9 && t <= 99)
	{
		second = t % 10;
		first = t / 10;
		x = asky(first);
		y = asky(second);
		_putchar(x);
		_putchar(y);
		return (0);
	}
	else
	{
		int fir = t / 100;
		int rs = asky(fir);

		first = (t % 100) / 10;
		second = ((t % 100) % 10);
		x = asky(first);
		y = asky(second);
		_putchar(rs);
		_putchar(x);
		_putchar(y);
		return (0);
	}
	return (-1);
}
