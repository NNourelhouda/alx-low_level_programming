#include <stdio.h>
#include <ctype.h>
#include "main.h"

/*
 *The _islower() function checks whether a character is lowercase alphabet (a-z) or not.
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
