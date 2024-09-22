#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character of a string
 * @str: a pointer to the string
 *
 * Description: this function will print the even index
 *in array of a string
 */
void puts2(char *str)
{
	int n, i;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (i  % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
