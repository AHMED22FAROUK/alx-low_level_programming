#include <stdio.h>

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
			putchar(',');
			putchar(' ');
			y++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
