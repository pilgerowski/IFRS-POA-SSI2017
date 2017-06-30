/*
 * Exercicio 3 da simulação da prova
 *
 * Aluno: Charles Roberto Pilger
 *
 */

#include <stdio.h>

#define TRUE        1
#define FALSE       0

#define TAM_VETOR   3

int VetorA[TAM_VETOR];
int VetorB[TAM_VETOR];
int VetorC[TAM_VETOR];

void lerValoresVetor() {
    int i;
    for(i = 0; i < TAM_VETOR; i++) {
        printf("Entre com o elemento %d do vetor: ", i);
        scanf("%d", &VetorA[i]);
    }
    
    return;
}

int encontrarMaiorValor() {
    int i, maior;
    
    maior = VetorA[0];
    for(i = 1; i < TAM_VETOR; i++) {
        if( VetorA[i] > maior )
            maior = VetorA[i];
    }
    return maior;
}

int calcularFatorial(int n) {
    int i;
    int fatorial = 1;
    
    if( n < 2 )
        return fatorial;
        
    for(i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }
    return fatorial;
}
	
int calcularQuantidadeDivisores(int n) {
    int i, numDivisores = 0;
    
    for(i = 1; i <= n; i++) {
        if( n % i == 0 )
            numDivisores++;
    }
    return numDivisores;
}

int contarQuantidadePrimos(int vetor[TAM_VETOR]) {
    int i, conta = 0;
    
    for(i = 0; i < TAM_VETOR; i++) {
        // 0, 1 e números negativos não são primos
        if( vetor[i] >= 2 ) { 
            // números primos tem apenas 2 divisores naturais: 1 e ele mesmo
            if( calcularQuantidadeDivisores( vetor[i] ) == 2 ) { 
                conta++;
            }
        }
    }
    
    return conta;
}

void imprimirVetor(int vetor[TAM_VETOR]) {
    int i;
    for(i = 0; i < TAM_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return;
}

int main()
{
    int i, maior;
    
    lerValoresVetor();
    
    maior = encontrarMaiorValor();
    
    for(i = 0; i < TAM_VETOR; i++) {
        VetorB[i] = calcularFatorial(VetorA[i]);
        VetorC[i] = VetorA[i] * maior;
    }
    printf("Vetor A:\n");
    imprimirVetor(VetorA);
    printf("Vetor B:\n");
    imprimirVetor(VetorB);
    printf("Vetor C:\n");
    imprimirVetor(VetorC);
    
    printf("Quantidades de primos no Vetor A: %d\n", contarQuantidadePrimos(VetorA));
    printf("Quantidades de primos no Vetor B: %d\n", contarQuantidadePrimos(VetorB));
    printf("Quantidades de primos no Vetor C: %d\n", contarQuantidadePrimos(VetorC));

    printf("\n\nAluno: Charles Roberto Pilger\n");
    return 0;
}


