#include <stdio.h>

int main()
{
    float precoUnitario, totalGastoPeloCliente, premio;
    int quantidade;
    
    printf("Cálculo de oferta\n\n");
    
    printf("Entre com o preço unitário: ");
    scanf("%f", &precoUnitario);
    
    printf("Entre com a quantidade: ");
    scanf("%d", &quantidade);

    totalGastoPeloCliente = precoUnitario * quantidade;
    premio = totalGastoPeloCliente * totalGastoPeloCliente;
    
    printf("O valor do prémio é de R$ %.2f\n", premio);

    return 0;
}
