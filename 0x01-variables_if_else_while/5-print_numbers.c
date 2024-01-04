#include <stdio.h>
/**
 * main - print serial numbers
 * Description: print number from 0 to 9
 *
 * Return: return 0 if success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
