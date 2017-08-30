/* 
 * File:   exercicio5.c
 * Author: 0283177
 *
 * Created on 8 de Junho de 2017, 19:28
 */

#include "main.h"

/*
 * Faça um programa que recebe a nota de 10 alunos e armazene as notas em um 
 * vetor. Calcule:
 * a - a média da classe
 * b - a quantidade de alunos aprovados, com média >= 7
 * c - a quantidade de alunos reprovados.
 */

int exercicio5(int argc, char** argv) {
    float fNotas[10];
    float fMedia = 0;
    int iCont = 0;
    int iAprovados = 0;
        
    // Lê 10 notas
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        fNotas[iCont] = lerNota();        
    }
     
    // Calcula a média e conta o número de aprovados
    for(iCont = 0; iCont <= 9; iCont++) 
    {
        fMedia += fNotas[iCont];     
        if( fNotas[iCont] >= 7.0)
            iAprovados++;                
    }
    fMedia = fMedia / 10;
    printf("A média da turma foi de %.2f.\n", fMedia);
    
    // Imprime quantidade de alunos aprovados
    printf("Foram aprovados %d alunos.\n", iAprovados);
    
    // Imprime quantidade de alunos reprovados
    printf("Foram reprovados %d alunos.\n", 10 - iAprovados);
    
    return (EXIT_SUCCESS);
}

