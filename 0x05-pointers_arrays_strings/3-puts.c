#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 *  @str: string
 * 
 */

void _puts(char *str)
{
int i =0;
while(str[i] != '\0')
{
putchar(str[i]);
i++;
}
}
