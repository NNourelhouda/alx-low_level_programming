#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase,
 *                  followed by a new line.
 *
 * Description: This function uses a while loop to print the letters
 *              of the alphabet in lowercase, starting with 'a' and
 *              ending with 'z'. It then prints a newline character.
 *
 * Return: Always void (no value returned).
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
