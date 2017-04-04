/*
 *
 * Escreva um programa que leia 4 notas e o peso de cada avaliação. Calcule a média e escreva na tela.
 *
 * Media = (N1*P1+N2*P2+N3*P3+N4*P4)/(P1+P2+P3+P4)  
 *
*/

#include <stdio.h>

int main()
{
    float fNota1, fNota2, fNota3, fNota4, fPeso1, fPeso2, fPeso3, fPeso4, fMedia;
    
    printf("Cálculo de médias\n\n");

    printf("Entre com o peso da primeira nota: ");
    scanf("%f", &fPeso1);

    printf("Entre com o peso da segunda nota: ");
    scanf("%f", &fPeso2);

    printf("Entre com o peso da terceira nota: ");
    scanf("%f", &fPeso3);

    printf("Entre com o peso da quarta nota: ");
    scanf("%f", &fPeso4);
    
    printf("Entre com a primeira fNota: ");
    scanf("%f", &fNota1);
    
    printf("Entre com a segunda fNota: ");
    scanf("%f", &fNota2);
    
    printf("Entre com a terceira fNota: ");
    scanf("%f", &fNota3);
    
    printf("Entre com a quarta fNota: ");
    scanf("%f", &fNota4);
    
    fMedia = ( fNota1 * fPeso1 + fNota2 * fPeso2 + fNota3 * fPeso3 + fNota4 * fPeso4 ) / ( fPeso1 + fPeso2 + fPeso3 + fPeso4 );
    
    printf("A média é de %.2f\n", fMedia);

    return 0;
}


