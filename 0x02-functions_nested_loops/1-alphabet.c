#include <stdio.h>
#include "main.h"

/**
 * function print_alphabet
 * Return: Always 0 (successful)
 */

void print_alphabet(void){
char i = 'a';
while (i<='z'){
_putchar( i );
i++;
}
_putchar('\n');
return;
}

int main(){
print_alphabet();
return 0;
}
