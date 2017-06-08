/*
 * File:   exercicio6.c
 * Author: 0283177
 *
 * Created on 8 de Junho de 2017, 19:28
 */

#include "main.h"

/*
 * Escrever um programa que lê um valor inteiro em reais e calcula qual o menor 
 * número possível de notas de 100, 50, 20, 10, 5, 2 e 1 em que o valor lido 
 * pode ser entregue ao cliente. Escrever a relação de notas necessárias. 
 * 
 * Utilize um vetor para armazenar o valor de cada tipo de nota. 
 * Notas = {100, 50, 20, 10, 5, 2, 1}
 */
int exercicio6(int argc, char** argv) {
    int iReais, iAux;
    int vNumeroNotas[7];
    int iCont = 0;
    
    int iValorNotas[] = {100, 50, 20, 10, 5, 2, 1};
    
    // Lê o valor a ser calculado
    iReais = lerValorInteiro();
    
    // Vê o noumero de notas necessárias para cada tipo de nota
    iAux = iReais;
    for(iCont = 0; iCont <= 6; iCont++) 
    {
        vNumeroNotas[iCont] = iAux / iValorNotas[iCont];
        iAux = iAux - vNumeroNotas[iCont] * iValorNotas[iCont];
    }
    
    // Imprime a relação de notas necessárias
    for(iCont = 0; iCont <= 6; iCont++) 
    {
        printf("Notas de %d: %d\n", iValorNotas[iCont], vNumeroNotas[iCont]);
    }
    
    return (EXIT_SUCCESS);
}

