#include <stdio.h>
#include "main.h"

/*
 * print_last_digit:function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 */

int print_last_digit(int num)
{
int last_digit = num % 10;
_putchar('last_digit');
return last_digit;
}
