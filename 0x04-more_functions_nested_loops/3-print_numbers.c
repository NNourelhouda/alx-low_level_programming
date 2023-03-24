#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * @a : parameter 1
 * @b : parameter 2
 * Return: result.
 *
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
return ;
}
