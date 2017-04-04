/*
 *
 * Escreva um programa que leia 2 notas, calcule a média simples e escreva na tela.
 *
 */


#include <stdio.h>

int main()
{
    float fNota1, fNota2, fMedia;
    
    printf("Cálculo de médias\n\n");
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &fNota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &fNota2);
    
    fMedia = ( fNota1 + fNota2 ) / 2;
    
    printf("A média é de %.2f\n", fMedia);

    return 0;
}
