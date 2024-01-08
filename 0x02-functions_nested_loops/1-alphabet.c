#include "main.h"

/**
 * print_alphabet - the entry point function
 * Description: print alphaber
 */
void print_alphabet(void)
{
	char x = 97;
	char y = 10;

	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar(y);
}
