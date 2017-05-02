/*
 * Escreva um algoritmo que escreva números de 1 a 10. Usando o comando FOR
 * (for(i=10;i>0;i--)) com decremento. (use a imaginação)
 */

#include <stdio.h>

int main()
{
    int iNumeroDePatinhos, iPatinhosQueForam, iPatinhosQueVoltaram;
    
	iNumeroDePatinhos = 5;
	
    for( iPatinhosQueForam = iNumeroDePatinhos; iPatinhosQueForam >= 0; iPatinhosQueForam-- ) 
    {
		iPatinhosQueVoltaram = iPatinhosQueForam - 1;
		
		switch( iPatinhosQueForam ) 
		{
		    case 0:
    			printf( "A mamãe patinha foi procurar\n");
    			iPatinhosQueVoltaram = iNumeroDePatinhos;
    			break;
    		case 1:
			    printf( "1 patinho foi passear\n" );
			    break;
    		default:
    		    printf( "%d patinhos foram passear\n", iPatinhosQueForam );
				break;
		}
		
		printf( "Além das montanhas\n" );
		printf( "Para brincar\n" );
		printf( "A mamãe gritou: Quá, quá, quá, quá\n" );		
		
		switch( iPatinhosQueVoltaram ) 
		{
		    case 0:  
		        printf( "Mas nenhum patinho voltou de lá.\n\n" );
		        break;
		    case 1:
		        printf( "Mas só %d patinho voltou de lá.\n\n", iPatinhosQueVoltaram );
		        break;
		    default:
    		    if( iPatinhosQueForam != 0 ) {
    	            printf( "E os %d patinhos voltaram de lá.\n\n", iPatinhosQueVoltaram );
    		    } else {
    			    printf( "Mas só %d patinhos voltaram de lá.\n\n", iPatinhosQueVoltaram );
    		    }
				break;
		}
    }

    return 0;
}