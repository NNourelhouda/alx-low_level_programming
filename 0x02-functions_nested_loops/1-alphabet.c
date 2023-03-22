#include <stdio.h>

/**
 * function print_alphabet
 * Return: Always 0 (successful)
 */

void print_alphabet(void){
    char i = 'a';
    while (i<='z'){
        putchar( i );
        i++;
    }
    putchar('\n');
return;
}

int main(){
    print_alphabet();
return 0;
}
