/*
 *
 * Escreva um programa que lê dois numeros e imprima o resultado da soma dos dois numeros.
 *
 */

#include <stdio.h>

int main()
{
    float fNum1, fNum2, fSoma;
    
    printf("Cálculo de soma\n\n");
    
    printf("Entre com o primeiro número: ");
    scanf("%f", &fNum1);
    
    printf("Entre com o segundo número: ");
    scanf("%f", &fNum2);
    
    fSoma = fNum1 + fNum2;
    
    printf("A soma é de %.2f\n", fSoma);

    return 0;
}
