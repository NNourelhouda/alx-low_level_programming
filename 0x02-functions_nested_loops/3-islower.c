#include <stdio.h>
#include <ctype.h>

/**
 * function _islower
 * Return: Always 0 (successful)
 */

int _islower(int c)
{
   if (islower(c))
    return 1 ;
   return 0;
}
int main(void)
{
    char c = 'a';
    printf("%d\n", _islower(c));
    return 0;
}
