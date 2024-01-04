#include <stdio.h>
/**
 * main - print some nums
 * Description: print 0 - 9 using ASCII
 *
 * Return: return 0 is success
 */

int main(void)
{
	int num = 48;
	
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
