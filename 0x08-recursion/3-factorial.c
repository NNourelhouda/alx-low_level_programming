#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * factorial - returns the factorial of a given number
 * @n: number given
 *
 * Return: The factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
