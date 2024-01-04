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
	char low = 97;
	char upper = 65;

	while (low <= 122)
	{
		putchar(low);
		low++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar("\n");
	return (0);
}
