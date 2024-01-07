#include <unistd.h>
#include "main.h"
int _putchar(char c);
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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
