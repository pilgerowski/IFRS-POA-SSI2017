/*
 * Exercicio 1 da simulação da prova
 *
 * Aluno: Charles Roberto Pilger
 *
 */

#include <stdio.h>

#define LINHAS 2
#define COLUNAS 5

int Matriz[LINHAS][COLUNAS];

void lerMatriz() {
    int l,c;
    
    for(l = 0; l < LINHAS; l++) {
        for(c = 0; c < COLUNAS; c++) {
            printf("Entre com o valor para Matriz[%d,%d]: ", l, c);
            scanf("%d", &Matriz[l][c]);
        }
    }
    return;
}

int somarLinha(int linha) {
    int soma = 0;
    int c;
    for(c = 0; c < COLUNAS; c++) {
        soma += Matriz[linha][c];
    }
    
    return soma;
}

int encontrarMaiorValor() {
    int l,c;
    
    int maior = Matriz[0][0];
    
    for(l = 0; l < LINHAS; l++) {
        for(c = 0; c < COLUNAS; c++) {
            if( Matriz[l][c] > maior ) {
                maior = Matriz[l][c];
            }
        }
    }
    return maior;
    
}

void imprimirMatriz() {
    int l,c;
    
    for(l = 0; l < LINHAS; l++) {
        for(c = 0; c < COLUNAS; c++) {
            printf("%d  ", Matriz[l][c]);
        }
        printf("\n");
    }
    return;
}

int main()
{
    int somaLinha1, somaLinha2, somaMatriz, maiorValor;
    
    lerMatriz();
    somaLinha1 = somarLinha(0);
    somaLinha2 = somarLinha(1);
    somaMatriz = somaLinha1 + somaLinha2;
    
    printf("Soma dos valores da linha 1: %d\n", somaLinha1);
    printf("Soma dos valores da linha 2: %d\n", somaLinha2);
    printf("Soma dos valores da matriz : %d\n", somaMatriz);
    imprimirMatriz();
    printf("Maior valor na matriz      : %d\n", encontrarMaiorValor());
    
    printf("\n\nAluno: Charles Roberto Pilger\n");
    return 0;
}


