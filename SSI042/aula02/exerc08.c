// Fa√ßa um programa que fa√ßa a convers√£o de um valor lido em reais para um valor em d√≥lares. Deve ser informada a cota√ß√£o do d√≥lar no dia pelo usu√°rio.

#include <stdio.h>

int main()
{
    float valorReais, valorDolar, cotacaoDolar;
    
    printf("Convers„o Real para DÛlares\n\n");
    
    printf("Entre com o valor em reais: R$ ");
    scanf("%f", &valorReais);
    
    printf("Entre com a cotaÁ„o do dÛlar: R$ ");
    scanf("%f", &cotacaoDolar);

    valorDolar = valorReais / cotacaoDolar;
    
    printf("O valor em dÛlares È de US$ %.2f\n", valorDolar);

    return 0;
}
