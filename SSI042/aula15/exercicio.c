/*
 * Atividades Matrizes
 *
 * Aluno: Charles Roberto Pilger
 *
 */
 
#include <stdio.h>

#define LINHAS  3
#define COLUNAS 3

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

int somarValoresMatriz() {
    int soma = 0;
    int l,c;
    
    for(l = 0; l < LINHAS; l++) {
        for(c = 0; c < COLUNAS; c++) {
            soma += Matriz[l][c];
        }
    }
    
    return soma;
}

float calcularMediaMatriz() {
    int soma, dividendo;
    float media;
    
    soma = somarValoresMatriz();
    dividendo = COLUNAS * LINHAS;
    
    media = (float) soma / (float) dividendo;
    
    return media;
}

int encontrarMenorValor() {
    int l,c;
    
    int menor = Matriz[0][0];
    
    for(l = 0; l < LINHAS; l++) {
        for(c = 0; c < COLUNAS; c++) {
            if( Matriz[l][c] < menor ) {
                menor = Matriz[l][c];
            }
        }
    }
    return menor;
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

long calcularProdutoDiagonalPrincipal() {
    int i;
    
    long produto = 1;
    for(i = 0; i < LINHAS; i++) {
        produto = produto * Matriz[i][i];
    }
    return produto;
}


void imprimirMatriz() {
    int l,c;
    
    for(l = 0; l < LINHAS; l++) {
        for(c = 0; c < COLUNAS; c++) {
            printf("%d\t", Matriz[l][c]);
        }
        printf("\n");
    }
    return;
}

int main()
{
    lerMatriz();
    
    printf("Matriz gerada:\n");
    imprimirMatriz();
    
    printf("Maior número                 : %d\n", encontrarMaiorValor());
    printf("Menor número                 : %d\n", encontrarMenorValor());
    printf("Média dos números            : %f\n", calcularMediaMatriz());
    printf("Soma da linha 1              : %d\n", somarLinha(0));
    printf("Produto da diagonal principal: %ld\n", calcularProdutoDiagonalPrincipal());
    
    return 0;
}


