#include <stdio.h>
#include "main.h"
#include <string.h>
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

