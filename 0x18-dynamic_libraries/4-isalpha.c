#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), alternatively 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
