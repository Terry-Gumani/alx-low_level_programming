#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the c into the stdout
 * c is the character to print
 *
 * Return:1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
