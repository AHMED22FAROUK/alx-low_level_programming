#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function compare
 * Description: compare if the letter is digit
 * @c: the var  to be compared
 *
 * Return: return 1 if success 0 if failed
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
