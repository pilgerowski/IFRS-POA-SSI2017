/*
 * A poupança rende 0,5% ao mês. Se eu depositar R$100 reais todos os meses, 
 * qual o valor que terei mês a mês em 2 ANOS?
 */

#include <stdio.h>

int main()
{
    float fDeposito = 100.0;
	float fRendimento = 0.5;
	
	float fTotal = 0;
    
	int iMesesPorAno = 12;
	int iAnos = 2;
	
	int iPeriodo = iMesesPorAno * iAnos;
	
	int	iMeses = 0;
    do {
        fTotal = fTotal + (fTotal * fRendimento / 100) + fDeposito;
        iMeses++;
    } while( iMeses < iPeriodo);

	printf("Total poupado após o período: R$ %.4f\n", fTotal);
    return 0;
}