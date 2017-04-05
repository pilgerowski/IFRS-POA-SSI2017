/*
 * Exercício 2:
 * 
 * Leia 04 (quatro) notas de um aluno, a primeira tem peso 1, a segunda peso 2,
 * a terceira peso 3, a quarta peso 4. Calcule a média e informe se o aluno foi 
 * aprovado ou não. Usar 'else'.Caso a nota seja menor que 7 ele será reprovado.
 * 
 */

#include "main.h"

#define PESO_NOTA_1   1.0
#define PESO_NOTA_2   2.0
#define PESO_NOTA_3   3.0
#define PESO_NOTA_4   4.0


void exercicio2() {

    float fNota1, fNota2, fNota3, fNota4, fMedia;

    printf("Entre com as notas do aluno:\n\n");
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &fNota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &fNota2);
    
    printf("Entre com a terceira nota: ");
    scanf("%f", &fNota3);
            
    printf("Entre com a quarta nota: ");
    scanf("%f", &fNota4);
    
    fMedia = ( 
                ( fNota1 * PESO_NOTA_1 ) + ( fNota2 * PESO_NOTA_2 ) + 
                ( fNota3 * PESO_NOTA_3 ) + ( fNota4 * PESO_NOTA_4 ) 
             ) / ( 
                PESO_NOTA_1 + PESO_NOTA_2 + PESO_NOTA_3 + PESO_NOTA_4 
             );
    
    printf( "A média do aluno é de %.2f. ", fMedia );
    if( fMedia < 7.0 ) {
        printf("Ele foi reprovado. \n");
    } else {
        printf("Ele foi aprovado. \n");
    }
    
    return;
}
