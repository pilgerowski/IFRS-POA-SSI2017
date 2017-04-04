/*
 *
 * Escreva um programa que lê três numeros e imprima o resultado da multiplicação. 
 *
 */

#include <stdio.h>

int main()
{
    float fNum1, fNum2, fNum3, fMultiplicacao;
    
    printf("Cálculo de multiplicação\n\n");
    
    printf("Entre com o primeiro número: ");
    scanf("%f", &fNum1);
    
    printf("Entre com o segundo número: ");
    scanf("%f", &fNum2);

    printf("Entre com o terceiro número: ");
    scanf("%f", &fNum3);
    
    fMultiplicacao = fNum1 * fNum2 * fNum3;
    
    printf("A multiplicação é de %.2f\n", fMultiplicacao);

    return 0;
}
