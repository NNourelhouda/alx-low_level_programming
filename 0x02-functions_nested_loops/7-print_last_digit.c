#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/*
 * print_last_digit:function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 */

int print_last_digit(int num)
{
int u = abs(num % 10);
_putchar(u + '0');
return (u);
}
