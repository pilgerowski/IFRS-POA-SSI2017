/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 0283177
 *
 * Created on 6 de Abril de 2017, 21:27
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
        getchar();

        printf("\n\n");
        switch( iOpcao ) {
            case 1: 
                exercicio01();
                break;
            case 2:
                exercicio02();
                break;
            case 3:
                exercicio03();
                break;
            case 4:
                exercicio04();
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

