#include "main.h"
/**
 * _memset - function to set a values to a pointer
 * @s: Destination memory address
 * @b:Source array
 * @n: Number of bytes you want to set to the value
 *
 * Description: loops through the given number and asigen
 * value of b to the s
 * Return: the destination pointerSource memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
