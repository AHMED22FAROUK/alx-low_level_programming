#include <string.h>
#include "main.h"

/**
 * puts_half - function print half of string
 * @str: a pointer to the first address element of string
 *
 * Description: print the second half of string
 */
void puts_half(char *str)
{
	int si, n;

	si = strlen(str);
	if (si % 2 == 0)
	{
		for (n = si / 2; n <= si; n++)
		{
			if (str[n] == '\0')
			{
				break;
			}
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (si + 1) / 2; n <= si; n++)
		{
			if (str[n] == '\0')
			{
				break;
			}
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
