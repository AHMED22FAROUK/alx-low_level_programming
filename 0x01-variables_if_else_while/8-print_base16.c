#include <stdio.h>
/**
 * main - print number and letters
 * Description: print 0-9 a-f by there hex value
 *
 * Return: return 0
 */
int main(void)
{
	int num = 0x61;
	int fir = 0x30;
	int i = 61;
	int n = 30;

	while (n <= 39)
	{
		putchar(fir);
		n++;
		fir++;
	}
	while (i <= 66)
	{
		putchar(num);
		i++;
		num++;
	}
	putchar('\n');
	return (0);
}
