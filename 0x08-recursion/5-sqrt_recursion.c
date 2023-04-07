#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n if it is a perfect square, -1 otherwise
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else
{
return (_sqrt_helper(n, 1, n));
}
}
/**
 * _sqrt_helper - Recursive helper function for _sqrt_recursion
 * @n: The number to find the square root of
 * @low: The lowest possible value for the square root
 * @high: The highest possible value for the square root
 *
 * Return: The square root of n if it is a perfect square, -1 otherwise
 */
int _sqrt_helper(int n, int low, int high)
{
int mid;
int sqr;
if (high < low)
{
return (-1);
}
mid = (low + high) / 2;
sqr = mid * mid;
if (sqr == n)
{
return (mid);
}
else if (sqr > n)
{
return (_sqrt_helper(n, low, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, high));
}
}

