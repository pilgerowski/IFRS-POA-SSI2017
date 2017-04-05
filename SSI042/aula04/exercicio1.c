/*
 * Exercício 1:
 * 
 * Leia 03 (três) notas de um aluno, calcule sua média. Caso a nota seja menor 
 * que 7 ele será reprovado. (ver exemplo: if-else)
 *
 */

#include "main.h"

void exercicio1() {
    
    float fNota1, fNota2, fNota3, fMedia;
    
    printf("Entre com as notas do aluno:\n\n");
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &fNota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &fNota2);
    
    printf("Entre com a terceira nota: ");
    scanf("%f", &fNota3);
    
    fMedia = ( fNota1 + fNota2 + fNota3 ) / 3;
    
    printf( "A média do aluno é de %.2f. ", fMedia );
    if( fMedia < 7.0 ) {
        printf("Ele foi reprovado. \n");
    } else {
        printf("Ele foi aprovado. \n");
    }
    
    return;
}
