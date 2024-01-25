#include "main.h"
/**
 * rev_string - reverse string
 * Description: reverse sttring
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int i;
	int y = 0;
	char eer[10];

	for (i = 0; i < 9; i++)
	{
		eer[i] = s[i];
	}
	for (i = 8; i != -1; i--)
	{
		s[i] = eer[y];
		y++;
	}
}
