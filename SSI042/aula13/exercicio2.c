/* 
 * File:   exercicio2.c
 * Author: 0283177
 *
 * Created on 8 de Junho de 2017, 19:28
 */

#include "main.h"

/* 
 * Escreva um programa que leia 10 números inteiros. Apresente a soma dos 10 
 * números. 
 */

int exercicio2(int argc, char** argv) {

    int vInteiros[10];
    long int lSoma = 0;
    int iCont;
    
    // Lê 10 números inteiros
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        vInteiros[iCont] = lerValorInteiro();        
    }
    
    // Soma os 10 números
    for(iCont = 0; iCont <= 9; iCont++) {
        lSoma += vInteiros[iCont];
    }
    
    // Apresenta a soma
    printf("A soma dos valores é %li.\n", lSoma);
    
    return (EXIT_SUCCESS);
}

