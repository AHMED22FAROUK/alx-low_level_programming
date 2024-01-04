#include <stdio.h>
/**
 * main - alphabet game without q,e
 * Description: print alphabet in loweer case except q and e
 *
 * Return: return 0 if success
 */
int main(void)
{
	char low = 97;

	for (int i = 97; i <= 122; i++)
	{
		low = i;
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(low);
		}
	}
	putchar('\n');
	return (0);
}
