/*
 * Escreva um algoritmo que escreva n�meros de 0 a 100 
 * (de 10 em 10: 0, 10, 20, 30, ..., 90,100). 
 * Usando o comando do..while.
 */

#include <stdio.h>

int main()
{
    int i = 0;
    
    do {
        printf("%d\n", i * 10);
        i++;
    } while(i <= 10);
    
    return 0;
}