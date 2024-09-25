#include <string.h>
#include "main.h"

/**
 * _strcmp - function to compare to strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Description: it will make a loop in s1 and compare
 *the ascii value with s1 each char in time
 * Return: return i as integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, cmp1, cmp2, k;

	k = strlen(s1);
	for (i = 0; i < k; i++)
	{
		cmp1 = s1[i];
		cmp2 = s2[i];
		if (cmp1 == cmp2)
		{
			continue;
		}
		else if (cmp1 > cmp2)
		{
			i = cmp1 - cmp2;
			break;
		}
		else
		{
			i = cmp1 - cmp2;
			break;
		}
	}
	if (i != (cmp1 - cmp2))
		i = 0;
	return (i);
}
