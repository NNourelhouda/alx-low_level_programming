#include <stdio.h>
#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int y = 0;
while (y < 10)
{
print_alphabet();
y++;
}
}
