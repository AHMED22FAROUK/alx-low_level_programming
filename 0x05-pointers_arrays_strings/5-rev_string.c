#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * Description: reverse sttring
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int n, i;
	char t;

	n = strlen(s);
	for (i = 0; i < n / 2; i++)
	{
		t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
}
