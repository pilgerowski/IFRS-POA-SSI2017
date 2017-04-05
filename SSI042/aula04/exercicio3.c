/*
 * Exercício 3:
 * 
 * Faça um programa que leia a média do aluno e seu numero de faltas. se as 
 * faltas forem maior ou igual a 5, escreva 'reprovado por faltas'. Se a média 
 * for menor que 7, foi reprovado por média. Senão, escreva 'Parabéns! você foi 
 * aprovado'.
 * 
 */

#include "main.h"

void exercicio3() {
    
    float fMedia;
    int iNumeroDeFaltas;
    
    printf("Entre com a média do aluno:");
    scanf("%f", &fMedia);
    
    printf("Entre com o número de faltas: ");
    scanf("%d", &iNumeroDeFaltas);
    
    if( iNumeroDeFaltas >= 5 ) {
        printf("\nReprovado por faltas.\n");
    } else {
        printf( "A média do aluno é de %.2f. ", fMedia );

        if( fMedia < 7.0 ) {
            printf("\nReprovado por média. \n");
        } else {
            printf("\nParabéns! você foi aprovado. \n");
        }
    }
    return;
}
