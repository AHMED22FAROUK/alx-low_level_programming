#include <string.h>
#include "main.h"

/**
 * _strcat - function that connects string to another
 * @dest: a pointer to the string will be connected
 * @src: a pointer to the string will be connected to
 *
 * Description: this function will loop through the
 *src pointer and will concatinate it to dest
 * Return: return the Dest
 */

char *_strcat(char *dest, char *src)
{
	int i, s, c;

	i = strlen(dest);
	s = strlen(src);
	for (c = 0; c <= s; c++)
	{
		dest[i] = src[c];
		i++;
	}
	return (dest);
}
