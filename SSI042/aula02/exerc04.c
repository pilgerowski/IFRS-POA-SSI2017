#include <stdio.h>

int main()
{
    int numeroFuncionario;
    float salarioFuncionario, valorINPC, indiceProdutividade, aumentoFuncionario, novoSalario;
    
    printf("Cálculo de salário\n\n");

    printf("Entre com o número do funcionário: ");
    scanf("%d", &numeroFuncionario);
    
    printf("Entre com o salário atual do funcionário: ");
    scanf("%f", &salarioFuncionario);
    
    printf("Entre com o valor do INPC: ");
    scanf("%f", &valorINPC);
    
    printf("Entre com o índice de produtividade: ");
    scanf("%f", &indiceProdutividade);
    
    aumentoFuncionario = salarioFuncionario *0.75 * valorINPC/100 + salarioFuncionario * indiceProdutividade / 100;

    novoSalario = salarioFuncionario + aumentoFuncionario;
    
    printf("O funcionário %d teve um aumento de R$ %.2f totalizando R$ %.2f.\n", numeroFuncionario, aumentoFuncionario, novoSalario);

    return 0;
}

