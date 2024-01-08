#include "main.h"
/**
 * print_alphabet_x10 - a function for print alphabet
 * Description: it prints ten lines of alphabet
 */
void print_alphabet_x10(void)
{
	char x = 97;
	int y = 1;

	for (; y <= 10; y++)
	{
		x = 97;
		for (; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
