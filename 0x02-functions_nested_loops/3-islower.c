#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * function _islower
 * Return: Always 0 (successful)
 */

int _islower(int c)
{
if (islower(c))
{
return 1;
}
return 0;
}
