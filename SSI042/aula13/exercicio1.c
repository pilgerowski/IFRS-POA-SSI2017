/* 
 * File:   exercicio1.c
 * Author: 0283177
 *
 * Created on 8 de Junho de 2017, 19:23
 */

#include "main.h"

/*
 * Escreva um programa que leia 10 números inteiros. Escrevas os 10 números 
 * na ordem correta e depois os 10 números na ordem inversa (da posição 10 
 * para a primeira). 
 */

int exercicio1(int argc, char** argv) {
    int vInteiros[10];
    int iCont;
    
    // Lê 10 números inteiros
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        vInteiros[iCont] = lerValorInteiro();        
    }
        
    // Imprime os 10 números na ordem correta
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        printf("%d ",  vInteiros[iCont]);        
    }
    printf("\n");
    
    // Imprime os 10 números na ordem inversa
    for(iCont = 9; iCont >= 0; iCont--) 
    {
        printf("%d ",  vInteiros[iCont]);         
    }
    printf("\n");
    
    return (EXIT_SUCCESS);
    
}

