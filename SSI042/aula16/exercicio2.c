/*
 * Exercicio 2 da simulação da prova
 *
 * Aluno: Charles Roberto Pilger
 *
 */

#include <stdio.h>

int Vetor[3];

void lerValoresVetor() {
    int a, b, c;
    
    printf("Entre com os valores de a, b e c:\n");
    printf("a: ");
    scanf("%d", &Vetor[0]);
    printf("b: ");
    scanf("%d", &Vetor[1]);
    printf("c: ");
    scanf("%d", &Vetor[2]);
    
    return;
}

int encontrarMenorValor() {
    int i, menor;
    
    menor = Vetor[0];
    for(i = 1; i < 3; i++) {
        if( Vetor[i] < menor )
            menor = Vetor[i];
    }
    return menor;
}

int encontrarMaiorValor() {
    int i, maior;
    
    maior = Vetor[0];
    for(i = 1; i < 3; i++) {
        if( Vetor[i] > maior )
            maior = Vetor[i];
    }
    return maior;
}

int main()
{
    
    lerValoresVetor();

    printf("Menor valor do vetor : %d\n", encontrarMenorValor());
    printf("Maior valor do vetor : %d\n", encontrarMaiorValor());
    
    printf("\n\nAluno: Charles Roberto Pilger\n");
    return 0;
}


