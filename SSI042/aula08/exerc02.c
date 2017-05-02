/*
 * - Escreva um algoritmo que escreva números de 1 a 10. use o comando do-while.
 */

#include <stdio.h>

int main()
{
    int i = 1;
    
    do {
        printf("%d\n", i);
        i++;
    } while(i <= 10);
    
    return 0;
}