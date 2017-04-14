/*
 * Faça um programa que código de origem de um produto e imprima a procedência, 
 * de acordo com a tabela:
 * 
 *     Codigo de origem Procedencia
 *     1 Sul
 *     2 Norte
 *     3 Leste
 *     4 Oeste
 *     5 ou 6 Nordeste
 *     7, 8, ou 9 Sudeste
 *     10 a 12 Centro-oeste
 *     21 a 22 Noroeste
 * 
 */

/* 
 * File:   exercicio01.c
 * Author: 0283177
 *
 * Created on 6 de Abril de 2017, 21:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void exercicio01() {
    int  iCodigoOrigem;
    
    printf("Entre com o código de origem: ");
    scanf("%d", &iCodigoOrigem);

    printf("O produto é procedente do ");
    switch(iCodigoOrigem) {
        case 1: 
            printf("Sul");
            break;
        case 2:
            printf("Norte");
            break;
        case 3:
            printf("Leste");
            break;
        case 4:
            printf("Oeste");
            break;
        case 5: 
        case 6:
            printf("Nordeste");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste");
            break;
        case 10:
        case 11:
        case 12:
            printf("Centro-oeste");
            break;
        case 21:
        case 22:
            printf("Noroeste");
            break;    
    }
    return;
}

