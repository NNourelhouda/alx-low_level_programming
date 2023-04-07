#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number
 * @y: power
 *
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y == 1)
{
return (x);
}
return (_pow_recursion(x, y - 1) * x);
}
