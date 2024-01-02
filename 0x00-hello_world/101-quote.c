#include <unistd.h>
/**
 * main - entry point function
 * Description:  print to the stderr
 *
 * Return: it return some text
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
