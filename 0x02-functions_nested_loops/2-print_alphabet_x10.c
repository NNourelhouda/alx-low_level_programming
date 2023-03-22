#include <stdio.h>
#include "main.h"
#include "1-alphabet.c"

void print_alphabet_x10()
{
int y = 0;
while ( y < 10)
{
    print_alphabet();
    y++;
}
_putchar('\n');
}
