/*
 * Escreva um algoritmo que escreva números de 0 a 100 
 * (de 10 em 10: 0, 10, 20, 30, ..., 90,100). 
 * Usando o comando do..while.
 */

#include <stdio.h>

int main()
{
    int iQuantidadeDeElefantes, iContador;
    
    printf("Entre com a quantidade de elefantes: ");
    scanf("%d", &iQuantidadeDeElefantes);
    
    iContador = 0;
    do {
        
        iContador++;
        if(iContador == 1) {
            printf("1 elefante se balançava, numa teia de aranha\n");
        } else {
            printf("%d elefantes se balançavam, numa teia de aranha\n", iContador);
        }
        printf("Mas como a teia não se arrebentou,\n");
        if(iContador == iQuantidadeDeElefantes) {
            printf("Todos foram para o chão!\n\n");
        } else if(iContador == 1) {    
            printf("Foi chamar outro elefante.\n\n");
        } else {
            printf("Foram chamar outro elefante.\n\n");
        }
        
    } while(iContador < iQuantidadeDeElefantes);
    
    return 0;
}