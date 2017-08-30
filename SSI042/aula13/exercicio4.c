/* 
 * File:   exercicio4.c
 * Author: 0283177
 *
 * Created on 8 de Junho de 2017, 19:28
 */

#include "main.h"

/* 
 * Faça um programa que carregue automaticamente 2 vetores. O primeiro com 10 
 * elementos numéricos e o segundo com 10 caracteres. Imprima o conteúdo destes 
 * vetores intercalados. Ex: 1a2b3c4d5e...
 */

int exercicio4(int argc, char** argv) {
    int vInteiros[10];
    char cCaracteres[10];
    int iCont;
    
    // Lê 10 números inteiros
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        vInteiros[iCont] = lerValorInteiro();        
    }
    
    // Lê 10 caracteres
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        cCaracteres[iCont] = lerCaracter();        
    }
    
    // Imprime o conteúdo destes vetores intercalados    
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        printf("%d%c", vInteiros[iCont], cCaracteres[iCont]);
    }
    
    printf("\n");
    
    return (EXIT_SUCCESS);
}

