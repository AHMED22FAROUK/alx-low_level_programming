#include "main.h"

/**
 * _memcpy - Copy a block of memory from source to dest
 * @dest: pointer to the content is to be copied
 * @src: Pointer to the source of data to be copied
 * @n: Number of bytes to copy
 *
 * Description: loops through the given number
 *and assigen the value of src to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
