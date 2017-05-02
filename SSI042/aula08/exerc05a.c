#include <stdio.h>

int main()
{
    int i, j, iIncomoda, iIncomodam;
	
    i = iIncomoda = iIncomodam = 0;
    
    while(i <= 4) 
    {
        if( i == 0 ) {
            printf("1 elefante incomoda muita gente\n");
            iIncomoda++;
        } else {
            printf("%d elefantes incomodam muita gente\n", (i * 2 + 1 ));
            iIncomodam++;
        }
        printf("%d elefantes", (i * 2 + 2 ) );
		j = 0;
        while( j <= (i * 2) ) {
            printf(" incomodam,");
            iIncomodam++;
			j++;
        }
        printf(" incomodam muito mais\n");
        iIncomodam++;
		
		i++;
    }

    while(i >= 1) {
        printf("%d elefantes incomodam muita gente\n", i * 2);
        iIncomodam++;
        if( (i * 2 - 1) == 1 ) {
            printf("1 elefante incomoda muito menos\n\n");
            iIncomoda++;
        } else {
            printf("%d elefantes", i * 2 - 1);
			j = 0;
            while( j < i * 2 - 2) {
                printf(" incomodam,");
                iIncomodam++;
				j++;
            }
            printf(" incomodam muito menos\n");
            iIncomodam++;
        }
		i--;
    }
    
    printf("Houve %d ocorrências da palavra 'incomoda' e %d da palavra 'incomodam', totalizando %d palavras.\n", iIncomoda, iIncomodam, iIncomoda + iIncomodam );
    
    return 0;
}