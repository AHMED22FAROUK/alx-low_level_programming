#include "main.h"
/**
 * print_sign - check number
 * Description: combare n with0
 * @n: numer to be checked
 *
 * Return: 1 if its positive -1 if negative else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
