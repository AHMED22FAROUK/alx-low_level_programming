#include <stdio.h>
/**
 * main - function print serial number
 * Description: this function prints i = 0-8 and y = 1-9
 * and each number of i should be printed first then y and it has to
 * be less than y
 *
 * Return: return 0
 */
int main(void)
{
	int i = 48;

	while (i <= 56)
	{
		int y = i + 1;

		while (y > i && y <= 57)
		{
			putchar(i);
			putchar(y);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
