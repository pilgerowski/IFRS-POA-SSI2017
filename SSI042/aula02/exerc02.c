/*
 *
 * Dadas 4 notas: a primeira com peso 1, a segunda com peso 2, a terceira com peso 3, 
 * a quarta com peso 4. Leia as 4 notas e cacule a média e escreva na tela.
 *
 * Media = (N1*1+N2*2+N3*3+N4*4)/(1+2+3+4) 
 *
 */


#include <stdio.h>

int main()
{
    float fNota1, fNota2, fNota3, fNota4, fPeso1, fPeso2, fPeso3, fPeso4, fMedia;
    
    printf("Cálculo de médias\n\n");

    fPeso1 = 1.0;
    fPeso2 = 2.0;
    fPeso3 = 3.0;
    fPeso4 = 4.0;
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &fNota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &fNota2);
    
    printf("Entre com a terceira nota: ");
    scanf("%f", &fNota3);
    
    printf("Entre com a quarta nota: ");
    scanf("%f", &fNota4);
    
    fMedia = ( fNota1 * fPeso1 + fNota2 * fPeso2 + fNota3 * fPeso3 + fNota4 * fPeso4 ) / ( fPeso1 + fPeso2 + fPeso3 + fPeso4 );
    
    printf("A média é de %.2f\n", fMedia);

    return 0;
}

