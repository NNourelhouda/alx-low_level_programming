#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if the character is upper
 * Return: 0 otherwise
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
return (0);
}
