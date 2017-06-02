/* 
 * File:   exercicios.c
 * Author: Charles ROberto Pilger
 *
 * Created on 25 de Maio de 2017, 21:24
 */

#include "main.h"

/*
 * Escreva um programa que leia 3 números. 
 * O programa deve apresentar a soma e o produto dos 3 números. 
 * O programa deve ter uma função que recebe os três números e retorna a soma, e 
 * outra função que recebe os três números e retorna o produto.
 *
 */

double somarTresFatores(float fA, float fB, float fC) {
	return fA + fB + fC;
}

double multiplicarTresFatores(float fA, float fB, float fC) {
	return fA * fB * fC;
}

int exercicio2() {

	float fValorA,fValorB,fValorC;

	printf("Entre com o primeiro valor: ");
	scanf("%f", &fValorA);
	printf("Entre com o segundo valor: ");
	scanf("%f", &fValorB);
	printf("Entre com o terceiro valor: ");
	scanf("%f", &fValorC);
    
	printf("Soma: %f.\n", somarTresFatores(fValorA,fValorB,fValorC));
	printf("Produto: %f\n", multiplicarTresFatores(fValorA,fValorB,fValorC));

	return (EXIT_SUCCESS);

}

