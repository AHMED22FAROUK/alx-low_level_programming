#include <stdio.h>

void print_alphabet(void);

/**
 * main - the entry point function
 * Description: print alphaber
 *
 * Return: return 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - for printing alphabet
 * Description: it prints lower alphabet case followed by a new line
 */
void print_alphabet(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
