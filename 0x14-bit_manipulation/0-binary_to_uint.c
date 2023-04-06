#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * where b is pointing to a string of 0 and 1 chars
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int decimal = 0;

  if (b == NULL)
    return (0);

  while (*b != '\0')
  {
    if (*b == '0' || *b == '1')
    {
      decimal = decimal << 1;
      decimal += (*b - '0');
      b++;
    }
    else
    {
      return (0);
    }
  }

  return (decimal);
}
