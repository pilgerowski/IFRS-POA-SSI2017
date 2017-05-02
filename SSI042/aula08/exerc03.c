/*
 * Escreva um algoritmo que escreva números de 0 a 100 
 * (de 10 em 10: 0, 10, 20, 30, ..., 90,100). 
 * Usando o comando while.
 */

#include <stdio.h>

int main()
{
    int i = 0;
    
    while(i <= 10) 
    {
        printf("%d\n", i * 10);
        i++;
    }

    return 0;
}