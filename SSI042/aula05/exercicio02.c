/*
 *  Calculadora: Ler a operação de acordo com o código. Ler dois operandos e 
 * imprimir o resultado. Usar case.
 * 
 * Código Operação
 * A Somar
 * B Subtrair
 * C Dividir
 * D Multiplicar
 */

/* 
 * File:   exercicio02.c
 * Author: 0283177
 *
 * Created on 6 de Abril de 2017, 21:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void exercicio02() {

    char  cOperacao;
    float fOperando1, fOperando2;
    float fResultado;
    
    printf("Entre com o operação (A - Somar / B - Subtrair / C - Dividir / D - Multiplicar):");
    scanf("%c", &cOperacao);
    getchar();
    printf("Entre com o primeiro operando:");
    scanf("%f", &fOperando1);
    printf("Entre com o segundo operando:");
    scanf("%f", &fOperando2);
    
    switch(cOperacao) {
        case 'A':
            fResultado = fOperando1 + fOperando2;
            break;
        case 'B':
            fResultado = fOperando1 - fOperando2;
            break;
        case 'C':
            fResultado = fOperando1 / fOperando2;
            break;
        case 'D':
            fResultado = fOperando1 * fOperando2;
            break;
		default:
			printf("Operação inválida.\n");
			return;
    }
    printf("O resultado da operação é %f\n", fResultado);
    
    return;
}

