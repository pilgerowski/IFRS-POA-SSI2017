/*
 * Leia o salário atual do funcionario e código da função. De acordo com a 
 * tabela abaixo, indique o novo salário.
 * 
 * Código - Cargo - Aumento
 * 1 - Escriturário - 30%
 * 2 - Secretário - 25%
 * 3 - Caixa - 20%
 * 4 - Gerente - 10%
 * 5 - Diretor - Sem aumento
 * 
 * Indique uma mensagem de erro se o código não existir. Use o comando CASE.
 * 
 */

/* 
 * File:   exercicio04.c
 * Author: 0283177
 *
 * Created on 6 de Abril de 2017, 21:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void exercicio04() {
    float fSalarioAtual, fNovoSalario, fAumento;
    int iCodigo;
    
    printf("Entre com o salário atual: ");
    scanf("%f", &fSalarioAtual);
    
    printf("Entre com o código do cargo: ");
    scanf("%d", &iCodigo);
    
    switch(iCodigo) {
        case 1  : fAumento = 0.30; break;
        case 2  : fAumento = 0.25; break;
        case 3  : fAumento = 0.20; break;
        case 4  : fAumento = 0.10; break;
        case 5  : fAumento = 0.00; break;
        default : printf("O código %d não existe.\n", iCodigo); return;
    }
    
    fNovoSalario = fSalarioAtual + fSalarioAtual * fAumento;
    
    printf("O novo salário é de %.02f.\n", fNovoSalario);
    return;
}

