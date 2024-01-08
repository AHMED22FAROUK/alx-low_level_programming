#include <unistd.h>
#include "main.h"

/**
 * main - the entry point function
 * Description: print alphaber
 *
 * Return: return 0
 */
int main(void)
{
	char x = 97;
	char y = 10;

	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar(y);
	return (0);
}
