#include <stdio.h>
/**
 * main - print numbers with spaces
 * Description: pront 0-9 with , and space after each number
 *
 * Return: return 0
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
