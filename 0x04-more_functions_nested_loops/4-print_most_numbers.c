#include "main.h"
/**
 * print_numbers - prints number
 * Description: it prints numbers from 0 to 9 but not 2 or 4
 */
void print_numbers(void)
{
	int x = 48;

	while (x <= 57)
	{
		if (x == 2 || x == 4)
		{
			x++;
			continue;
		}
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
