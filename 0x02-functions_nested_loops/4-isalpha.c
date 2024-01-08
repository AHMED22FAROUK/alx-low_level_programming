#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check for alpha letter
 * Description: afunction take input to check if its aleter
 * @c: the parameter to be checked
 *
 * Return: return 1 if alpha
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
