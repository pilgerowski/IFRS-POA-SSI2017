/* 
 * File:   exercicio02.c
 * Author: Charles Roberto Pilger
 *
 * Created on 11 de Maio de 2017, 19:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    // Cabecalho de apresentacao do programa
    printf( "*****************************************************************\n" );
    printf( "* Programa Eleicao                                              *\n" );
    printf( "*                                                               *\n" );
    printf( "* Esse programa reaiza a votacao para sindico e subsindicos.    *\n" );
    printf( "*                                                               *\n" );
    printf( "* Autor: Charles Roberto Pilger                       Maio/2017 *\n" );
    printf( "*****************************************************************\n\n" );
    
    // Numero de eleitores que participarao da eleicao
    int iNumeroDeEleitores = 9;  
    
    // Recebe o voto para sindico
    unsigned int iVotoSindico;
    int iVotoSubsindico;
    
    // Contabiliza os votos para sindico
    int iVotosParaSindicoA = 0;
    int iVotosParaSindicoB = 0;
    int iVotosParaSindicoC = 0;
    int iVotosEmBrancoParaSindico = 0;
    int iVotosNulosParaSindico = 0;
    int iVotosValidosParaSindico = 0; 
    
    // Contabiliza os votos para subsindico
    int iVotosParaSubsindicoX = 0;
    int iVotosParaSubsindicoY = 0;
    int iVotosEmBrancoParaSubsindico = 0;
    int iVotosNulosParaSubsindico = 0;
    int iVotosValidosParaSubsindico = 0;
    
    // Calcula o percentual a ser exibido na saída
    float fPercentual;
    
    // Recebendo os votos dos eleitores
    for( int iEleitor = 1; iEleitor <= iNumeroDeEleitores; iEleitor++ ) {
        
        printf( "Votos do eleitor %d:\n", iEleitor );
        
        printf( "Sindico ( 11 para A, 22 para B, 33 para C e 66666 para branco ): " );
        scanf( "%u", &iVotoSindico );
        
        switch( iVotoSindico ) {
            case 11:
                iVotosParaSindicoA++;
                iVotosValidosParaSindico++;
                break;
            case 22:
                iVotosParaSindicoB++;
                iVotosValidosParaSindico++;
                break;
            case 33:
                iVotosParaSindicoC++;
                iVotosValidosParaSindico++;
                break;
            case 66666:
                iVotosEmBrancoParaSindico++;                
                iVotosValidosParaSindico++;
                break;
            default:
                iVotosNulosParaSindico++;
                break;
        }
                       
        printf( "Subsindico ( 4 para X, 5 para Y, 6 para branco ): " );
        scanf( "%d", &iVotoSubsindico );
        
        switch( iVotoSubsindico ) {
            case 4:
                iVotosParaSubsindicoX++;
                iVotosValidosParaSubsindico++;
                break;
            case 5:
                iVotosParaSubsindicoY++;
                iVotosValidosParaSubsindico++;
                break;
            case 6:
                iVotosEmBrancoParaSubsindico++;
                iVotosValidosParaSubsindico++;
                break;
            default:
                iVotosNulosParaSubsindico++;
                break;
        }
    }
    
    // Apresentacao do resultado final
    
    printf( "\nResultado Sindico:\n" );
    fPercentual = 100 * iVotosParaSindicoA / iVotosValidosParaSindico;
    printf( "%d votos para candidato A (%.1f\%%)\n", iVotosParaSindicoA, fPercentual );
    fPercentual = 100 * iVotosParaSindicoB / iVotosValidosParaSindico;
    printf( "%d votos para candidato B (%.1f\%%)\n", iVotosParaSindicoB, fPercentual );
    fPercentual = 100 * iVotosParaSindicoC / iVotosValidosParaSindico;
    printf( "%d votos para candidato C (%.1f\%%)\n", iVotosParaSindicoC, fPercentual );
    fPercentual = 100* iVotosEmBrancoParaSindico / iVotosValidosParaSindico;
    printf( "%d votos em branco (%.1f\%%)\n", iVotosEmBrancoParaSindico, fPercentual );
    printf( "%d votos nulos\n", iVotosNulosParaSindico);
    
    printf( "\nResultado para Subsindico:\n" );
    fPercentual = 100 * iVotosParaSubsindicoX / iVotosValidosParaSubsindico;
    printf( "%d votos para candidato X (%.1f\%%)\n", iVotosParaSubsindicoX, fPercentual );
    fPercentual = 100 * iVotosParaSubsindicoY / iVotosValidosParaSubsindico;
    printf( "%d votos para candidato Y (%.1f\%%)\n", iVotosParaSubsindicoY, fPercentual );
    fPercentual = 100 * iVotosEmBrancoParaSubsindico / iVotosValidosParaSubsindico;
    printf( "%d votos em branco (%.1f\%%)\n", iVotosEmBrancoParaSubsindico, fPercentual );
    printf( "%d votos nulos\n", iVotosNulosParaSubsindico );
            
    printf( "\n\n\nProgramador: Charles Roberto Pilger\n" );    
    return (EXIT_SUCCESS);

} 