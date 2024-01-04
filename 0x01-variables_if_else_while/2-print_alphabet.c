#include <stdio.h>
/**
 * main - alphabet game
 * Description: this function print the alphabet in small case
 *
 * Return: return 0 if true
 */
int main(void)
{
	char num = 97;

	while (num <= 122)
	{
		putchar(num);
		num++;
	}
	printf("\n");
	return (0);
}
