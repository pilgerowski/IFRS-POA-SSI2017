/*
 * O cardápio de uma lancheria é o seguinte:
 * 
 * Código do lanche Especificação Preço unitário
 * 
 * 100 Cachorro quente 5,00
 * 101 Bauru simples 6,00
 * 102 Bauru c/ovo 8,00
 * 103 Hamburger 5,00
 * 104 Cheeseburger 7,50
 * 105 Refrigerante 2,00
 * 
 * Escrever um progrmaa que leia o código do item pedido, a quantidade e 
 * calcule o valor a ser pago por aquele  lanche. Considere que a cada 
 * execução somente será calculado um item. Use Case.
 */

/* 
 * File:   exercicio03.c
 * Author: 0283177
 *
 * Created on 6 de Abril de 2017, 21:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void exercicio03() {
    int iCodigo;
    float fQuantidade, fPreco, fValor;
    
    printf("Entre com o código do item pedido:");
    scanf("%d", &iCodigo);
    getchar();
    
    printf("Entre com a quantidade:");
    scanf("%f", &fQuantidade);
    
    switch(iCodigo) {
        case 100: 
            fPreco = 5.00;
            break;
        case 101: 
            fPreco = 6.00;
            break;
        case 102:
            fPreco = 8.00;
            break;
        case 103:
            fPreco = 5.00;
            break;
        case 104:
            fPreco = 7.50;
            break;
        case 105:
            fPreco = 2.00;
            break;
        default:
            printf("Código inválido.\n");
            return;
    }
    fValor = fPreco * fQuantidade;
    printf("O valor a ser pago é de R$ %.2f", fValor);
    
    return;
}

