#include "main.h"
#include <string.h>
/**
 * print_rev - print reverse string
 * Description: print reverse string
 * @s: a pointer to a string literals
 */
void print_rev(char *s)
{
	int i = strlen(s);
	int y;

	for (y = 0; i != 0; y++)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
