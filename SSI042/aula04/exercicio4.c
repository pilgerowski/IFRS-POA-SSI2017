/*
 * Exercício 4:
 * 
 * Escreva um programa que, dada a idade de um nadador, classifique-o em uma 
 * das seguintes categorias:
 *
 * infantil A = 5 - 7 anos
 * infantil B = 8 - 10 anos
 * juvenil A = 11 - 13 anos
 * juvenil B = 14 - 17 anos
 * adulto = 18 anos ou mais
 * (NÃO USAR SWITCH)
 *
 * 
 */

#include "main.h"

void exercicio4() {
    int iIdade;
    
    printf("Entre com a idade do nadador: ");
    scanf("%d", &iIdade);
    
    printf("Categoria: ");
    if( iIdade >= 5 && iIdade <= 7 ) {
        printf("infantil A");
    } else if( iIdade >= 8 && iIdade <= 10 ) {
        printf("infantil B");
    } else if( iIdade >= 11 && iIdade <= 13 ) {
        printf("juvenil A");
    } else if( iIdade >= 14 && iIdade <= 17 ) {
        printf("juvenil B");
    } else if( iIdade >= 18 ) {
        printf("adulto");
    } else {
        printf("sem categoria");
    }
    printf("\n");
    return;
}
