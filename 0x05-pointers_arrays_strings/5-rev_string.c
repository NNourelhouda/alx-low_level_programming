#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
void rev_string(char *s)
{
int i = 0;
int j = _strlen(s) - 1;
char temp;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}

