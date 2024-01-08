#include "main.h"
#include <ctype.h>
/**
 * _islower - sub function
 * Description: it check if the letter is lower case
 * @c: variable contains the letter
 * Return: return 1 if success
 */
#include "main.h"

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
