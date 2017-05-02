/*
 * Elabore um algoritmo que leia o código do candidato em um voto.
 * Calcule e escreva:
 * - total de votos para cada candidato;
 * - total de votos nulos;
 * - total de votos em branco;
 * Como finalizador do conjunto de votos, tem-se o valor 0.
 */

#include <stdio.h>

int main()
{
    int iCodigoDoCandidato, iTotal, iTotalCand01, iTotalCand02, iTotalCand03, iTotalCand04, iTotalNulos, iTotalBrancos;
    iTotal = iTotalCand01 = iTotalCand02 = iTotalCand03 = iTotalCand04 = iTotalNulos = iTotalBrancos = 0;
    
    do {
        printf("Entre com o código do candidato: ");
        scanf("%d", &iCodigoDoCandidato);
        
        if( iCodigoDoCandidato > 0 && iCodigoDoCandidato <= 6 ) {			
            switch( iCodigoDoCandidato ) {
                case 1:
                    printf("Candidato 1\n");
                    iTotalCand01++;
                    iTotal++;
                    break;
                case 2:
                    printf("Candidato 2\n");
                    iTotalCand02++;
                    iTotal++;
                    break;
                case 3:
                    printf("Candidato 3\n");
                    iTotalCand03++;
                    iTotal++;
                    break;
                case 4:
                    printf("Candidato 4\n");
                    iTotalCand04++;
                    iTotal++;
                    break;
                case 5:
                    printf("Voto Nulo\n");
                    iTotalNulos++;
                    iTotal++;
                    break;
                case 6:
                    printf("Voto Em Branco\n");
                    iTotalBrancos++;
                    iTotal++;
                    break;
                default:
                    printf("Voto Inválido\n");
                    break;
            }
        }
        
            
    } while( iCodigoDoCandidato > 0 ); 
    
    printf("Total de votos:\n");
    printf("Candidato 1: %d votos\n", iTotalCand01);
    printf("Candidato 2: %d votos\n", iTotalCand02);
    printf("Candidato 3: %d votos\n", iTotalCand03);
    printf("Candidato 4: %d votos\n\n", iTotalCand04);
    printf("Votos nulos: %d votos\n", iTotalNulos);
    printf("Votos em branco: %d votos\n\n", iTotalBrancos);
    printf("Total de votos: %d\n\n", iTotal);
    return 0;
}