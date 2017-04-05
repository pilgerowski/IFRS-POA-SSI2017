/*
 * Exercício 5:
 * 
 * Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
 * 
 */


#include "main.h"

void exercicio5() {

    int iNumero1, iNumero2, iNumero3, iMaior;

    printf("Entre com o primeiro número: ");
    scanf("%d", &iNumero1 );

    iMaior = iNumero1;

    printf("Entre com o segundo número: ");
    scanf("%d", &iNumero2 );

    if( iNumero2 > iMaior ) {
        iMaior = iNumero2;
    }

    printf("Entre com o terceiro número: ");
    scanf("%d", &iNumero3 );

    if( iNumero3 > iMaior ) {
        iMaior = iNumero3;
    }

    printf("\n\nO maior dos três números é %d.\n", iMaior);

    return;	
    
}
