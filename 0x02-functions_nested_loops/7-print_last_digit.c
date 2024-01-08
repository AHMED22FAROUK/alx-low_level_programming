#include "main.h"

/**
 * print_last_digit - print last digit
 * Description: prit last number
 * @c: the full number
 *
 * Return: return the number
 */
int print_last_digit(int c)
{
	int r = (c % 10);

	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}
