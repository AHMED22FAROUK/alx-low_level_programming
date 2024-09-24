#include <string.h>
#include "main.h"

/**
 * _strncat - function that connects string to another
 * @dest: a pointer to the string will be connected
 * @src: a pointer to the string will be connected to
 * @n: thhe number of bytes to be concatenated
 *
 * Description: this function will loop through the
 *src pointer and will concatinate it to dest
 * Return: return the Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s, c;

	i = strlen(dest);
	s = strlen(src);
	for (c = 0; c < n; c++)
	{
		dest[i] = src[c];
		i++;
		if (c == s)
		{
			break;
		}
	}
	return (dest);
}
