/*
 * Exercício 7:
 * 
 * Calcule o IMC. De acordo com (b), o IMC=peso em kilos dividido pela altura 
 * (em metros) ao quadrado.
 * 
 * (a) http://como-emagrecer.com/calculo-de-imc.html
 * (b) http://como-emagrecer.com/calculo-imc.html
 * 
 * Leia a altura (em metros) e o peso em kilos de uma pessoa, calcule o IMC e 
 * indique a situação de acordo com a tabela em (a). (Abaixo do peso, peso 
 * ideal, sobrepeso, obesidade I, II, III)
 * 
 */


#include "main.h"

void exercicio7() {
    
    float fAltura, fPeso, fIMC;
    char  sSituacao[15];

    printf("Entre com a altura (em metros): ");
    scanf("%f", &fAltura);

    printf("Entre com o peso (em quilos): ");
    scanf("%f", &fPeso);

    fIMC = fPeso / ( fAltura * fAltura );

    if( fIMC < 18.5 ) {
        strcpy(sSituacao, "abaixo do peso");
    } else if( fIMC < 24.9 ) {
        strcpy(sSituacao, "peso ideal");
    } else if( fIMC < 29.9 ) {
        strcpy(sSituacao, "sobrepeso");
    } else if( fIMC < 34.9 ) {
        strcpy(sSituacao, "obesidade I");
    } else if( fIMC < 39.9 ) {
        strcpy(sSituacao, "obesidade II");
    } else {
        strcpy(sSituacao, "obesidade III");
    }

    printf("\n\nSituação: %s.\n", sSituacao );

    return;
}
