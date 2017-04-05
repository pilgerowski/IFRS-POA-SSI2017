/*
 * Exercício 6:
 * 
 * Faça um programa que leia um nº inteiro e mostre uma mensagem indicando se 
 * este número é par ou ímpar, e se é positivo ou negativo. Ex: 'O número 2 é 
 * par e é positivo'.
 * 
 */


#include "main.h"

void exercicio6() {

    int iNumero;
    char sParidade[6], sSinal[9];

    printf("Entre com um número inteiro: ");
    scanf("%d", &iNumero);

    if( iNumero % 2 == 0 ) {
        strcpy(sParidade, "par");
    } else {
        strcpy(sParidade, "impar");
    }        
    
    if( iNumero >= 0 ) {
        strcpy(sSinal, "positivo");
    } else {
        strcpy(sSinal, "negativo");
    }

    printf("\nO número %d é %s e é %s.\n", iNumero, sParidade, sSinal);

    return;    
}
