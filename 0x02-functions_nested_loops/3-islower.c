#include <stdio.h>
#include <ctype.h>
#include "main.h"

/*
 *
 *_islower : function that  checks if a character is lowercase
 *c: the character to check
 *Return: 1 if c is lowercase, 0 otherwise
 *
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}
