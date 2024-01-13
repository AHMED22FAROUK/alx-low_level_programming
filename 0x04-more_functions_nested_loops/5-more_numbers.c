#include "main.h"

/**
 * more_numbers - print ten lines
 * Description: print ten lines of numbers
 */
void more_numbers(void)
{
	int y = 0;

	while (y <= 9)
	{
		int i = 0;

		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		y++;
	}
}
