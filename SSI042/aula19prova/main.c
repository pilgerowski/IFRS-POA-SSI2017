/* 
 * File:   main.c
 * Author: 0283177 - Charles Roberto Pilger
 *
 * Created on 6 de Julho de 2017, 19:15
 */

#include <stdio.h>
#include <stdlib.h>

void escreveCabecalho(char * string) {
    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* %s\n\n", string);
}


/*
 * Fazer um algoritmo que lê uma matriz 4 X 4 e efetuar as seguintes operaçõe s:
 * 
 * O programa deve permitir ao usuário digitar os valores da matriz.
 * a) Soma dos elementos da diagonal secundária (usar repetição)
 * b) Soma dos elementos da diagonal principal (usar repetição)
 * c) Soma dos elementos da primeira coluna (usar repetição), apresentar a soma de cada coluna
 * d) Encontrar o maior valor e menor valor (definir função que recebe a matriz como parâmetro)
 * e) Encontrar o segundo maior valor (definir função que recebe a matriz como parâmetro)
 */

int somarDiagonalPrincipal(int matriz[4][4]) {
    int c, soma = 0;
    for(int l=0;l<4;l++) {
        c = l; // recebe o valor da linha
        soma = soma + matriz[l][c];
    }
    return soma;
}

int somarDiagonalSecundaria(int matriz[4][4]) {
    int c, soma = 0;
    c = 4;
    for(int l=0;l<4;l++) {
        c = c - 1;
        soma = soma + matriz[l][c];
    }
    return soma;
}

int somarElementosColuna(int coluna, int matriz[4][4]) {
    int l, soma = 0;
    for(l=0;l<4;l++) {
        soma = soma + matriz[l][coluna];
    }
    return soma;
}

int encontrarMaiorValor(int matriz[4][4]) {
    int l, c, maior = matriz[0][0];
    for(l=0;l<4;l++) {
        for(c=0;c<4;c++){
            if(maior < matriz[l][c]) maior = matriz[l][c];
        }
    }
    return maior;
}

int encontrarMenorValor(int matriz[4][4]) {
    int l, c, menor = matriz[0][0];
    for(l=0;l<4;l++) {
        for(c=0;c<4;c++){
            if(menor > matriz[l][c]) menor = matriz[l][c];
        }
    }
    return menor;
}
int encontrarSegundoMaiorValor(int matriz[4][4]) {
    int l, c, maior = encontrarMaiorValor(matriz);
    int segundoMaior = encontrarMenorValor(matriz);
    for(l=0;l<4;l++) {
        for(c=0;c<4;c++){
            if(segundoMaior < matriz[l][c] && matriz[l][c] != maior) segundoMaior = matriz[l][c];
        }
    }
    return segundoMaior;
}

void escreverMatriz(int matriz[4][4]) {
    int l,c;
    for(l=0;l<4;l++) {
        for(c=0;c<4;c++){
            printf("%d\t", matriz[l][c]);
        }
        printf("\n");
    }
}    
    
void exercicio1() {    
    int matriz[4][4];
    int l,c;   
    
    escreveCabecalho("Matriz 4x4");
    
    /* Utilizado para testar o exercicio
        for(l=0;l<4;l++) {
            for(c=0;c<4;c++){
                matriz[l][c] = l * c + l;
            }
        }
        escreverMatriz(matriz);
    */
    for(l=0;l<4;l++) {
        for(c=0;c<4;c++){
            printf("Entre com o valor da linha %d e da coluna %d da matriz: ", l, c);
            scanf(" %d", &matriz[l][c]);
        }
    }    
    
    // Resolução de a
    printf("Soma dos elementos da diagonal secundária: %d\n", somarDiagonalSecundaria(matriz));
    
    // Resolução de b
    printf("Soma dos elementos da diagonal principal: %d\n", somarDiagonalPrincipal(matriz));
   
    // Resolução de c
    for(c=0;c<4;c++) {
        printf("Soma dos elementos da %dª coluna: %d\n", c+1, somarElementosColuna(c,matriz));
    }
    
    // Resolução de d
    printf("Maior valor: %d - Menor valor: %d\n", encontrarMaiorValor(matriz), encontrarMenorValor(matriz));
    
    // Resolução de e
    printf("Segundo maior valor: %d\n", encontrarSegundoMaiorValor(matriz));
}

/*
 * Escreva um programa que leia do usuário 5 valores double a,b,c,d,e. 
 * 
 * - Leitura dos valores 
 * - Escreva uma função que recebe como parâmetro os valores do tipo double 
 *   A,B,C,D,E e retorne o maior valor.
 * - Escreva uma função que recebe como parâmetro os valores do tipo double 
 *   A,B,C,D,E e retorne o menor valor.
 * - Escreva uma função que recebe como parâmetro os valores do tipo double 
 *   A,B,C,D,E e escreve na tela a média dos valores
 */

double maiorDouble(double a, double b) {
    if(a > b) 
        return a;
    return b;
}

double encontrarMaiorValorABCDE(double a, double b, double c, double d, double e) {
    return maiorDouble(a, maiorDouble(b, maiorDouble(c, maiorDouble(d, e))));
}

double menorDouble(double a, double b) {
    if(a < b)
        return a;
    return b;
}

double encontrarMenorValorABCDE(double a, double b, double c, double d, double e) {
    return menorDouble(a, menorDouble(b, menorDouble(c, menorDouble(d, e))));
}

void calcularMediaABCDE(double a, double b, double c, double d, double e) {
    double media;
    
    media = (a + b + c + d + e) / 5;
    printf("A média da série é: %lf\n", media);
}

double recebeDouble(char * string) {
    double val;
    printf("%s", string);
    scanf(" %lf", &val);
    return val;
}

void exercicio2() {
    double a, b, c, d, e;
    double maior, menor;
    
    escreveCabecalho("Valores de A, B, C, D e E");
    a = recebeDouble("Entre com o valor de A: ");
    b = recebeDouble("Entre com o valor de B: ");
    c = recebeDouble("Entre com o valor de C: ");
    d = recebeDouble("Entre com o valor de D: ");
    e = recebeDouble("Entre com o valor de E: ");
    
    maior = encontrarMaiorValorABCDE(a,b,c,d,e);
    printf("O maior valor da série é: %lf\n", maior);
    
    menor = encontrarMenorValorABCDE(a,b,c,d,e);
    printf("O menor valor da série é: %lf\n", menor);
    
    calcularMediaABCDE(a,b,c,d,e);
}

/*
 * Em uma eleição de Miss existem cinco candidatas.
 * Os votos são informados através de códigos.
 * Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
 * - 11, 22, 33, 44, 55 = Candidata 1, Candidata 2, Candidata 3, Candidata 4, Candidata 5 respectivamente;
 * - os totais de votos das candidatas devem ser armazenados em um vetor. (exemplo: int votos[5]);
 * Não devem ser considerados/contados votos brancos ou nulos.
 * Elabore um programa que leia o código da candidata em um voto.
 * Calcule e escreva:
 * -total de votos para cada candidata e respectivo percentual.
 * Como finalizador do conjunto de votos, tem-se o valor 0.
 * O voto '0' não deve ser contado.
 */

float calcularPercentual(int total, int parte) {
    return (float) parte * 100 / (float) total;
}

void exercicio3(){
    int votos[5];
    int indiceCandidata, voto, totalVotos = 0;

    escreveCabecalho("Eleição de Miss");
    
    // Zera a contagem dos votos
    for(int i = 0; i < 5; i++ ) {
        votos[i] = 0;
    }
    
    voto = 1;
    while(voto != 0) {
        printf("Entre com o código da candidata [11, 22, 33, 44, 55] ou 0 para sair: ");
        scanf(" %d", &voto);
        if(voto != 0) {
            switch(voto) {
                case 11: indiceCandidata = 0; break;
                case 22: indiceCandidata = 1; break;
                case 33: indiceCandidata = 2; break;
                case 44: indiceCandidata = 3; break;
                case 55: indiceCandidata = 4; break;
                default: indiceCandidata = 9;                 
            }
            if(indiceCandidata != 9) {
                votos[indiceCandidata] = votos[indiceCandidata] + 1;
                totalVotos = totalVotos + 1;
            } else {
                printf("Voto anulado!\n");
            }
        } else {
            printf("Votação encerrada!\n");
        }
    }
    
    printf("Total de votos de cada candidata e percentual:\n");
    printf("* Candidata A: %d (%.2f)\n", votos[0], calcularPercentual(totalVotos, votos[0]));
    printf("* Candidata B: %d (%.2f)\n", votos[1], calcularPercentual(totalVotos, votos[1]));
    printf("* Candidata C: %d (%.2f)\n", votos[2], calcularPercentual(totalVotos, votos[2]));
    printf("* Candidata D: %d (%.2f)\n", votos[3], calcularPercentual(totalVotos, votos[3]));
    printf("* Candidata E: %d (%.2f)\n", votos[4], calcularPercentual(totalVotos, votos[4]));
     
}

int main(int argc, char** argv) {
    int exercicio = 1;
    
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Prova final da disciplina de 2017/1 - Linguagens de Programação I *\n");
    printf("* Aluno: Charles Roberto Pilger                                     *\n");
    printf("* Data: 06/07/2017                                                  *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
    
    while(exercicio != 0) {
        printf("\nEntre com o número do exercício [1, 2 ou 3] que deseja executar [0 para sair]: ");
        scanf(" %d", &exercicio);
        switch(exercicio) {
            case 0: printf("Encerrando execução.\n"); break;
            case 1: exercicio1(); break;
            case 2: exercicio2(); break;
            case 3: exercicio3(); break;
            default:
                printf("Desculpe mas essa opção não está disponível. Tente novamente.\n");
        }
    }
    
    return (EXIT_SUCCESS);
}