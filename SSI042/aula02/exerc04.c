/*
 *
 * Considerando que o aumento dos funcionários é de 75% do INPC e mais um percentual 
 * de produtividade discutido com a empresa. Construir um programa que lê o número do 
 * funcionário, seu salário atual, o valor do INPC e o índice de produtividade e 
 * escreve o número do funcionário, seu aumento e o valor de seu novo salário.
 *
 * Aumento=Salario*0,75*INPC/100  +Salario*IndiceProdutividade/100
 * Salario Novo = Salario + Aumento 
 *
 */

#include <stdio.h>

int main()
{
    int iNumeroFuncionario;
    float fSalarioFuncionario, fValorINPC, fIndiceProdutividade, fAumentoFuncionario, fNovoSalario;
    
    printf("Cálculo de salário\n\n");

    printf("Entre com o número do funcionário: ");
    scanf("%d", &iNumeroFuncionario);
    
    printf("Entre com o salário atual do funcionário: ");
    scanf("%f", &fSalarioFuncionario);
    
    printf("Entre com o valor do INPC: ");
    scanf("%f", &fValorINPC);
    
    printf("Entre com o índice de produtividade: ");
    scanf("%f", &fIndiceProdutividade);
    
    fAumentoFuncionario = fSalarioFuncionario * 0.75 * fValorINPC / 100 + fSalarioFuncionario * fIndiceProdutividade / 100;

    fNovoSalario = fSalarioFuncionario + fAumentoFuncionario;
    
    printf( "O funcionário %d teve um aumento de R$ %.2f totalizando R$ %.2f.\n", iNumeroFuncionario, fAumentoFuncionario, fNovoSalario );

    return 0;
}

