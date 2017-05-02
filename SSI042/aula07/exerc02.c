/*
 * Escreva um algoritmo que escreva números de 10 a 0. 
 * Usando o comando FOR ao invés de incremento, use decremento (ex: i--)
 */

#include <stdio.h>

int main()
{
    int i;
    
    for(i = 10; i >= 0 ; i--) 
    {
        printf("%d\n", i);
    }

    return 0;
}