/* 
 * File:   main.c
 * Author: Charles Roberto Pilger
 *
 * Created on 30 de Março de 2017, 20:56
 */

#include "main.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int iOpcao, iSair;
    iSair = 0;

    while( iSair == 0 ) {
        printf("\nEntre com o número do exercício que deseja executar (0 para sair): ");
        scanf("%d", &iOpcao);

        printf("\n\n");
        switch( iOpcao ) {
            case 1: 
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 3:
                exercicio3();
                break;
            case 4:
                exercicio4();
                break;
            case 5:
                exercicio5();
                break;
            case 6:
                exercicio6();
                break;
            case 7:
                exercicio7();
                break;
            default:
                if(iOpcao != 0) {
                    printf("Opção inválida.\n");
                } else {
                    iSair = 1;
                }
        }
    }

    return (EXIT_SUCCESS);
}

