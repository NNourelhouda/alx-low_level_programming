#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer 1
 * @b: pointer 2 
 * @c: parameter 
 * 
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
