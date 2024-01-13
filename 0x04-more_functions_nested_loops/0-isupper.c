#include "main.h"
#include <ctype.h>
/**
 * _isupper - function compare
 * Description: compare if the letter iss upper case
 * @c: the letter to be compared
 *
 * Return: return 1 if success 0 if failed
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
