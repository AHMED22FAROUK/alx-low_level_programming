#include <stdio.h>
/**
 * main - print alphabet
 * Description: print reversed alphaber
 *
 * Return: return 0
 */

int main(void)
{
	char low = 122;

	while (low >= 97)
	{
		putchar(low);
		low--;
	}
	putchar('\n');
	return (0);
}
