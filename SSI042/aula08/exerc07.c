/*
 * Escrever um programa que leia o código do item pedido, a quantidade e calcule 
 * o valor a ser pago por aquele lanche. Os itens serão lidos até que seja incluído 
 * um código inválido, encerrando o pedido. Ao final, escreva o valor total do pedido
 */

#include <stdio.h>

int main()
{
    int iCodigoDoItem, iQuantidadeDoItem;
    float fValorItem, fValorTotal = 0.0;
    
    do {
        printf("Entre com o código do pedido: ");
        scanf("%d", &iCodigoDoItem);
        
        if( iCodigoDoItem >= 100 && iCodigoDoItem <= 105 ) {
            switch( iCodigoDoItem ) {
                case 100:
                    printf("Cachorro quente\n");
                    fValorItem = 11.00;
                    break;
                case 101:
                    printf("Bauru simples\n");
                    fValorItem = 13.00;
                    break;
                case 102:
                    printf("Bauru c/ovo\n");
                    fValorItem = 15.00;
                    break;
                case 103:
                    printf("Hamburger\n");
                    fValorItem = 11.00;
                    break;
                case 104:
                    printf("Cheeseburger\n");
                    fValorItem = 13.00;
                    break;
                case 105:
                    printf("Refrigerante\n");
                    fValorItem = 3.00;
                    break;
            }
            printf("Entre com a quantidade: ");
            scanf("%d", &iQuantidadeDoItem);
            fValorTotal = fValorTotal + ( fValorItem * iQuantidadeDoItem );
        }
        
            
    } while( iCodigoDoItem >= 100 && iCodigoDoItem <= 105 ); 
    printf("Valor total do pedido: %.2f\n", fValorTotal );
    return 0;
}