#include <stdio.h>
#include "main.h"

void times_table(void)
{
int num;
int i, j;
for (num = 0; num <= 9; num++)
{
for (i = 0; i <= 9; i++)
{
int result = num * i;
if (result < 10)
{
putchar(result + '0');
}
else
{
int digits[2];
int num_digits = 0;
while (result > 0)
{
digits[num_digits] = result % 10;
result /= 10;
num_digits++;
}
for (j = num_digits - 1; j >= 0; j--)
{
putchar(digits[j] + '0');
}
}
if (i < 9)
{
putchar(',');
putchar(' ');
putchar(' ');
}
}
putchar('\n');
}
}
