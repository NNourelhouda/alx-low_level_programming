#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/*
 * int _abs: function that computes the absolute value of an integer.
 * Prototype: int _abs(int);
 */

int _abs(int i)
{
if (i > 0)
{
return (i);
}
else if (i <= 0)
{
return (-i);
}
return (0);
}
