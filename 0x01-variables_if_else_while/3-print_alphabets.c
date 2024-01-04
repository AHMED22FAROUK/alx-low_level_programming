#include <stdio.h>
/**
 * main -alphabets in lowwer and upper case
 * Description: this function print using ascii the lower
 * case alphabet using sma variable the upper case using
 * tall variable and the nl variable is for new line
 *
 * Return: return 0 if success
 */

int main(void)
{
	char sma = 97;
	char tall = 65;
	char nl = 10;

	for (int i = 65; i <= 90; i++)
	{
		for (; sma <= 122; sma++)
		{
			putchar(sma);
		}
		tall = i;
		putchar(tall);
	}
	putchar(nl);
	return (0);
}
