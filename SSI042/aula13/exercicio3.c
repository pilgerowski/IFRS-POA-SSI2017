/* 
 * File:   exercicio3.c
 * Author: 0283177
 *
 * Created on 8 de Junho de 2017, 19:28
 */

#include "main.h"

/* 
 * Escreva um programa que leia 10 números reais. Apresente o resultado da 
 * multiplicação destes. 
 */

int exercicio3(int argc, char** argv) {
    float vReais[10];
    double dMultiplica = 1;
    int iCont;
    
    // Lê 10 números reais
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        vReais[iCont] = lerValorReal();        
    }
    
    // Multiplica os valores
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        dMultiplica = dMultiplica * vReais[iCont];
    }
    
    // Apresenta o resultado
    printf("A multiplicação dos valores é %f.\n", dMultiplica);
    
    return (EXIT_SUCCESS);
}

