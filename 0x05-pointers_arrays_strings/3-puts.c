#include "main.h"
/**
 * _puts - print to std function
 * Description: a function print to the terminal or shell
 * @str: parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
