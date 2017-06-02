/* 
 * File:   exercicio1.c
 * Author: Charles ROberto Pilger
 *
 * Created on 25 de Maio de 2017, 21:24
 */

#include "main.h"

/*
 * Escreva um programa que leia um número e escreva este número elevado ao 
 * quadrado. O programa deve ter uma função que recebe um número como parâmetro 
 * e retorne este número elevado ao quadrado
 */


double calcularQuadrado(float fNumero){
    return fNumero * fNumero;
}

int exercicio1() {
	float fNumero;
    
	printf("Entre com o valor:");
	scanf("%f", &fNumero);
	printf("O quadrado de %.2f é %.4f.\n", fNumero, calcularQuadrado(fNumero));

	return (EXIT_SUCCESS);

}

