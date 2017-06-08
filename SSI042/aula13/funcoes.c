/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Funções em comum dos exercícios
 */

#include "main.h"

int lerValorInteiro() 
{
    int iValor;
    printf("Entre com um número inteiro: ");
    scanf("%d", &iValor);
    return iValor;
}

float lerValorReal() 
{
    float fValor;
    printf("Entre com um número real: ");
    scanf("%f", &fValor);
    return fValor;
}

char lerCaracter() 
{
    char cValor;
    printf("Entre com um caracter: ");
    scanf(" %c", &cValor);
    return cValor;
}

float lerNota() 
{
    float fValor;
    do {
        fValor = lerValorReal();
    } while( fValor < 0.0 || fValor > 10.0 );
    
    return fValor;
}