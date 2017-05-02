/*
 * Escreva um algoritmo que escreva números de 1 a 10. Usando o comando FOR
 */

#include <stdio.h>

int main()
{
    int i, j, iIncomoda, iIncomodam;
    iIncomoda = iIncomodam = 0;
    
    for(i = 0; i <= 4; i++) 
    {
        if( i == 0 ) {
            printf("1 elefante incomoda muita gente\n");
            iIncomoda++;
        } else {
            printf("%d elefantes incomodam muita gente\n", (i * 2 + 1 ));
            iIncomodam++;
        }
        printf("%d elefantes", (i * 2 + 2 ) );
        for(j = 0; j <= (i * 2); j++) {
            printf(" incomodam,");
            iIncomodam++;
        }
        printf(" incomodam muito mais\n");
        iIncomodam++;
    }

    for(i = 5; i >= 1; i--) {
        printf("%d elefantes incomodam muita gente\n", i * 2);
        iIncomodam++;
        if( (i * 2 - 1) == 1 ) {
            printf("1 elefante incomoda muito menos\n\n");
            iIncomoda++;
        } else {
            printf("%d elefantes", i * 2 - 1);
            for(j = 0; j < i * 2 - 2; j++) {
                printf(" incomodam,");
                iIncomodam++;
            }
            printf(" incomodam muito menos\n");
            iIncomodam++;
        }
    }
    
    printf("Houve %d ocorrências da palavra 'incomoda' e %d da palavra 'incomodam', totalizando %d palavras.\n", iIncomoda, iIncomodam, iIncomoda + iIncomodam );
    
    return 0;
}