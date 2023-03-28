#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *  @s: string
 * 
 */
 
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
int i = len - 1;
for (i >= 0;i--);
putchar(s[i]);
putchar('\n');
}
