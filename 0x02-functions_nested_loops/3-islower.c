#include <stdio.h>
#include <ctype.h>
#include "main.h"

/*
 *_islower function checks whether a character is lowercase
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
