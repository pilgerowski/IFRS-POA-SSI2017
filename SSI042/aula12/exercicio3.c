/* 
 * File:   exercicios.c
 * Author: Charles ROberto Pilger
 *
 * Created on 25 de Maio de 2017, 21:24
 */


#include "main.h"


#define FALSE 0;
#define TRUE  1;


/*
 * Escreva um programa que apresente leia dois números e apresente as seguintes opções:
 * A - Somar 2 números
 * B - Multiplicar 2 números
 * C - Dividir 2 Números
 * D -  Subtrair 2 Número
 */


double somar(float fA, float fB) {
	return fA + fB;
}

double multiplicar(float fA, float fB) {
	return fA * fB;
}

double dividir(float fA, float fB) {
	return fA / fB;
}

double subtrair(float fA, float fB) {
	return fA - fB;
}

int exercicio3() {
	float fValorA, fValorB, fResultado = 0.0;
	int bOpcaoValida = FALSE;
	char cOpcao;
    
	printf("Entre com o primeiro valor: ");
	scanf("%f", &fValorA);
	printf("Entre com o segundo valor: ");
	scanf("%f", &fValorB);
    
	do{
		printf("Entre com a operação (A para somar, B para multiplicar, C para dividir e D para subtrair): ");
		scanf(" %c", &cOpcao); 
 		switch(toupper(cOpcao)) {
			case 'A': 
				bOpcaoValida = TRUE;
				fResultado = somar(fValorA,fValorB);
				break;
			case 'B':
				bOpcaoValida = TRUE;
				fResultado = multiplicar(fValorA,fValorB);
				break;
			case 'C':
				bOpcaoValida = TRUE;
				fResultado = dividir(fValorA,fValorB);
				break;
			case 'D':
				bOpcaoValida = TRUE;
				fResultado = subtrair(fValorA,fValorB);
				break;
			default:
				printf("Opção inválida. Tente novamente.\n");
				break;
		}
	} while(!bOpcaoValida);
	printf("O resultado é %.4f.\n", fResultado);
    
	return (EXIT_SUCCESS);

}

