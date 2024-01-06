#include <stdio.h>
/**
 * main - print all possible number of 4 digits
 * Description: the main function prints tow digits then space then
 * then tho digits num1 = 0-9 , num2 = 0-8 , num3 = 0-9 , num4 = 0-9.
 *
 * Return: return 0 if success
 */
int main(void)
{
	int a = 48, b = 48, x = 48, y = 48;

	while (x <= 57)
	{
		if (x < a)
		{
			x++;
			continue;
		}
		while (y <= 56)
		{
			if (y >= b)
			{
				b++;
				continue;
			}
			while (a <= 57)
			{
				while (b <= 57)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (a != 57 || b != 57 || x != 57 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
					b++;
				}
				a++;
				b = 48;
			}
			a = 48;
			y++;
		}
		y = 48;
		x++;
	}
	putchar('\n');
	return (0);
}
