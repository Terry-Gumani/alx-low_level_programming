#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: point to a string of 0 and 1 chars
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int val = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i]  != '0' && b[i] != '1')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		val *= 2;
		if (b[i] == '1')
			val += 1;
	}
	return (val);
}
