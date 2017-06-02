/* 
 * File:   exercicios.c
 * Author: Charles ROberto Pilger
 *
 * Created on 25 de Maio de 2017, 21:24
 */

#include <ctype.h>
#include "main.h"

#define FALSE 0;
#define TRUE  1;


/* O cardápio de uma lancheria é o seguinte:
 * Código do lanche Especificação Preço unitário
 * 100 Cachorro quente 11,00
 * 101 Bauru simples 13,00
 * 102 Bauru c/ovo 15,00
 * 103 Hamburger 11,00
 * 104 Cheeseburger 13,00
 * 105 Refrigerante 3,00

 * O programa deverá apresentar as seguintes opcoes:
 * A - Novo pedido (Zerar Valor total do pedido)
 * B - Incluir Item e quantidade
 * C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
 * D - Total do Dia (apenas valor)
 * E - SAIR do programa

 * O Programa deverá ter uma função que receba como parametros o codigo do item 
 * e a quantidade, esta funcao deverá retornar o valor daquela quantidade de items.
 */

float calcularPedido(int iCodigoProduto, int iQuantidadePedido) {

	float	fValorUnitarioDoProduto, fValorTotalDoProduto;

	switch(iCodigoProduto) {
		case 100: // Cachorro quente 11,00
			fValorUnitarioDoProduto = 11.0;
			break;
		case 101: // Bauru simples 13,00
			fValorUnitarioDoProduto = 13.0;
			break;
		case 102: // Bauru c/ovo 15,00
			fValorUnitarioDoProduto = 15.0;
			break;
		case 103: // Hamburger 11,00
			fValorUnitarioDoProduto = 11.0;
			break;
		case 104: // Cheeseburger 13,00
			fValorUnitarioDoProduto = 13.0;
			break;
		case 105: // Refrigerante 3,00
			fValorUnitarioDoProduto = 3.0;
			break;
	} 

	fValorTotalDoProduto = fValorUnitarioDoProduto * iQuantidadePedido;

	return fValorTotalDoProduto;

}

int receberQuantidadeProduto() {

	int	iQuantidadePedido;

	printf("Entre com a quantidade: ");
	scanf("%d", &iQuantidadePedido);

	return iQuantidadePedido;
}

int receberCodigoProduto() {
	int 	iCodigoProduto;
	int	bCodigoValido;

	do {
		printf("Entre com o código do produto: ");
		scanf("%d", &iCodigoProduto);
		
		if( 
			( iCodigoProduto == 100 ) || ( iCodigoProduto == 101 ) || ( iCodigoProduto == 102 ) ||
			( iCodigoProduto == 103 ) || ( iCodigoProduto == 104 ) || ( iCodigoProduto == 105 ) ) 
		{
			bCodigoValido = TRUE;
		} else {
			printf("Código inválido. Tente novamente.\n");	
			bCodigoValido = FALSE;
		}

	} while( !bCodigoValido );

	return iCodigoProduto;

}

int exercicio4() {
 
	float	fValorTotalDoPedido = 0;
	float	fValorTotalDoDia = 0;
	int	iCodigoProduto, iQuantidadePedido;	
	char	cOpcao;
	int	bSair = FALSE;
    
	do {
		printf("A - Novo pedido\n");
		printf("B - Incluir Item e quantidade\n");
		printf("C - Fechar pedido e Imprimir total\n");
		printf("D - Total do Dia\n");
		printf("E - SAIR do programa\n");
        
		printf("Entre com a opção:\n");
		scanf(" %c", &cOpcao);

		switch(toupper(cOpcao)) {
			case 'A':
				fValorTotalDoPedido = 0;
				printf("Novo pedido!\n");
                break;
			case 'B':
				iCodigoProduto = receberCodigoProduto();
				iQuantidadePedido = receberQuantidadeProduto();
				fValorTotalDoPedido += calcularPedido( iCodigoProduto, iQuantidadePedido );
				break;
			case 'C':
				printf("Pedido fechado. Valor: %.2f.\n", fValorTotalDoPedido);
				fValorTotalDoDia += fValorTotalDoPedido;
				fValorTotalDoPedido = 0;
				break;
			case 'D':
				printf("Valor total do dia: %.2f.\n", fValorTotalDoDia);
				break;
			case 'E':
				bSair = TRUE;
				break;
			default:
				printf("Opção inválida. Tente novamente.\n");
				break;
        }
    } while(!bSair);
    
    
    return (EXIT_SUCCESS);

}
