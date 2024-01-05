#include <stdio.h>
/**
 * main - print serial  of number
 * Description: this function print xyz when x = 0-7 ,
 * y = 2-8 , z = 3-9
 *
 * Return: retutn 0 if success
 */
int main(void)
{
	int x = 48;

	while (x <= 55)
	{
		int y = x + 1;

		while (y <= 56)
		{
			int z = y + 1;

			while (z <= 57)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != 55)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
