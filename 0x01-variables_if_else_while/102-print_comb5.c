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
	int num1 = 48;

	while (num1 <= 57)
	{
		int num2 = 48;

		while (num2 <= 56)
		{
			int num3 = 48;

			while (num3 <= 57)
			{
				int num4 = 48;

				while (num4 <= 57)
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (num1 != 57 || num3 != 57 || num4 != 57)
					{
						putchar(',');
						putchar(' ');
					}
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
