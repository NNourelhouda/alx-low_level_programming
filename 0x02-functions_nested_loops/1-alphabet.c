#include <stdio.h>
#include "main.h"
/**
 * function that prints the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * Return: Always 0 (successful)
 */

void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
return;
}
