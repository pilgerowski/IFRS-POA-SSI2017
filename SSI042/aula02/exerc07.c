/*
 *
 * A Joalheria Silva está fazendo aniversário e resolveu premiar o primeiro cliente do 
 * dia devolvendo a ele o valor da compra ao quadrado. Faça um programa que leia o preço
 * unitário do produto adquirido pelo cliente, a quantidade e calcule o total gasto pelo
 * cliente. Mostre o total e calcule o total elevado ao quadrado. Mostre o valor do prêmio.
 *
 */

#include <stdio.h>

int main()
{
    float fPrecoUnitario, fTotalGastoPeloCliente, fPremio;
    int iQuantidade;
    
    printf("Cálculo de oferta\n\n");
    
    printf("Entre com o preço unitário: ");
    scanf("%f", &fPrecoUnitario);
    
    printf("Entre com a quantidade: ");
    scanf("%d", &iQuantidade);

    fTotalGastoPeloCliente = fPrecoUnitario * iQuantidade;
    fPremio = fTotalGastoPeloCliente * fTotalGastoPeloCliente;
    
    printf("O valor do prémio é de R$ %.2f\n", fPremio);

    return 0;
}
