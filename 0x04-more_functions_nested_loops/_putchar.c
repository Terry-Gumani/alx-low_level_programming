#include "main.h"
#include <unstdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return:0 (Success)
 * On error -1 is returned and errno is approximated
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
