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

	while (low <= 122)
	{
		if (low == 101 || low == 113)
		{
			low++;
			continue;
		}
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
