#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: The natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, 1, n));
}
}
int _sqrt_helper(int n, int start, int end)
{
if (start > end)
{
return (-1);
}
int mid;
mid = (start + end) / 2;
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid > n)
{
return (_sqrt_helper(n, start, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}
