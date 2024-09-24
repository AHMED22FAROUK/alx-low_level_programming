#include <string.h>
#include "main.h"

/**
 * _strncpy - function that connects string to another
 * @dest: a pointer to the string will be connected
 * @src: a pointer to the string will be connected to
 * @n: thhe number of bytes to be concatenated
 *
 * Description: this function will loop through the
 *src pointer and will concatinate it to dest
 * Return: return the Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
