#include <stdio.h>
/**
 * main - print from 1 to 100
 * Description: print fizz and buzz instead of 3 and 5
 *
 * Return: return 0 if success
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FizzBuzz");
				putchar(' ');
				i++;
				continue;
			}
			else
			{
				printf("Fizz");
				putchar(' ');
				i++;
				continue;
			}
			continue;
		}
		if ((i % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
			i++;
			continue;
		}
		printf("%d", i);
		i++;
		if (i == 101)
		{
			break;
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
