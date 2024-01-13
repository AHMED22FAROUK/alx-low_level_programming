#include "main.h"
/**
 * print_most_numbers - prints number
 * Description: it prints numbers from 0 to 9 but not 2 or 4
 */
void print_most_numbers(void)
{
	int x = 48;

	while (x <= 57)
	{
		if (x == 50 || x == 52)
		{
			x++;
			continue;
		}
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
