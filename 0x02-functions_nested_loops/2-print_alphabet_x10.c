#include <stdio.h>

/**
 * main - entry point
 * function print_alphabet_x10
 * Return: Always 0 (successful)
 */

void print_alphabet_x10(void)
{
    for (int y = 0 ; y<10 ; y++){
    char i = 'a';
    while (i<='z'){
    _putchar_nolock( i );
   i++;
    }
    }
_putchar_nolock('\n');
}
int main(){
    print_alphabet_x10();
return 0;
}
