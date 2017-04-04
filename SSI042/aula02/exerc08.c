/*
 *
 * Faça um programa que faça a conversão de um valor lido em reais para 
 * um valor em dólares. Deve ser informada a cotação do dólar no dia pelo 
 * usuário.
 *
 */

#include <stdio.h>

int main()
{
    float fValorReais, fValorDolar, fCotacaoDolar;
    
    printf("Conversão Real para Dólares\n\n");
    
    printf("Entre com o valor em reais: R$ ");
    scanf("%f", &fValorReais);
    
    printf("Entre com a cotação do dólar: R$ ");
    scanf("%f", &fCotacaoDolar);

    fValorDolar = fValorReais / fCotacaoDolar;
    
    printf("O valor em dólares é de US$ %.2f\n", fValorDolar);

    return 0;
}
