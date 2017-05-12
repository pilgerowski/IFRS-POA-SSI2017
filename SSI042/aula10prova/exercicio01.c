/* 
 * File:   exercicio01.c
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
    printf( "* Programa Atletas                                              *\n" );
    printf( "*                                                               *\n" );
    printf( "* Esse programa calcula quantos atletas estao em uma categoria. *\n" );
    printf( "*                                                               *\n" );
    printf( "* Autor: Charles Roberto Pilger                       Maio/2017 *\n" );
    printf( "*****************************************************************\n\n" );
    
    // Define o numero de atletas 
    int iNumeroDeAtletas            = 10;
    
    // Idade e peso do atleta
    int iIdadeAtleta, iPesoAtleta;
        
    // Contadores de categorias
    int iContador_Infantil_Leve     = 0;
    int iContador_Infantil_Medio    = 0;
    int iContador_Infantil_Pesado   = 0;
    int iContador_Juvenil_Leve      = 0;
    int iContador_Juvenil_Medio     = 0;
    int iContador_Juvenil_Pesado    = 0;
    int iContador_Adulto_Leve       = 0;
    int iContador_Adulto_Medio      = 0;
    int iContador_Adulto_Pesado     = 0;
   
    // Booleano para validacao
    int bValorValido                = 0;
    
    
    for( int i = 1; i <= iNumeroDeAtletas; i++ ) {        
        
        printf( "Entre com os dados do atleta %d:\n", i );
        
        // ********************************************************************
        // ENTRADA DE DADOS
        // ********************************************************************
        
        // Entrada e validacao do peso do atleta
        do {
            printf( "Peso: " );
            scanf( "%d", &iPesoAtleta );
            
            // Verifica se entrou com um valor positivo para peso;
            bValorValido = ( iPesoAtleta > 0 ); 
            if( !bValorValido ) {
                printf( "Valor invalido. Tente novamente.\n" );
            } 
        } while( !bValorValido );
        
        // Entrada e validacao da idade do atleta
        do {
            printf( "Idade: " );
            scanf( "%d", &iIdadeAtleta );
            
            // Verifica se entrou com um valor positivo para idade;
            bValorValido = ( iIdadeAtleta > 0 ); 
            if( !bValorValido ) {
                printf( "Valor invalido. Tente novamente.\n" );
            } 
        } while( !bValorValido );
        
        // ********************************************************************
        // PROCESSAMENTO DOS DADOS REPASSADOS
        // ********************************************************************
        
        // Determina em qual categoria o atleta esta em funcao da idade e peso
        printf( "Categoria " );
        if( iIdadeAtleta < 11 ) {
                       
            printf( "Infantil " );
            if( iPesoAtleta < 40 ) {
                printf( "Leve" );
                iContador_Infantil_Leve++;
            } else if( iPesoAtleta < 80 ) {
                printf( "Medio" );
                iContador_Infantil_Medio++;
            } else {
                printf( "Pesado" );
                iContador_Infantil_Pesado++;
            }
            
        } else if( iIdadeAtleta < 18 ) {   
                       
            printf( "Juvenil " );
            if( iPesoAtleta < 40 ) {
                printf( "Leve" );
                iContador_Juvenil_Leve++;
            } else if( iPesoAtleta < 80 ) {
                printf( "Medio" );
                iContador_Juvenil_Medio++;
            } else {
                printf( "Pesado" );
                iContador_Juvenil_Pesado++;
            }
            
        } else {              
                       
            printf( "Adulto " );
            if( iPesoAtleta < 40 ) {
                printf( "Leve" );
                iContador_Adulto_Leve++;
            } else if( iPesoAtleta < 80 ) {
                printf( "Medio" );
                iContador_Adulto_Medio++;
            } else {
                printf( "Pesado" );
                iContador_Adulto_Pesado++;
            }
            
        }       
       
        printf( "\n\n" );
        
    }    
    
    printf( "%2d Atletas Categoria Infantil Leve\n", iContador_Infantil_Leve );
    printf( "%2d Atletas Categoria Infantil Medio\n", iContador_Infantil_Medio );
    printf( "%2d Atletas Categoria Infantil Pesado\n", iContador_Infantil_Pesado );
    printf( "%2d Atletas Categoria Juvenil Leve\n", iContador_Juvenil_Leve );
    printf( "%2d Atletas Categoria Juvenil Medio\n", iContador_Juvenil_Medio );
    printf( "%2d Atletas Categoria Juvenil Pesado\n", iContador_Juvenil_Pesado );
    printf( "%2d Atletas Categoria Adulto Leve\n", iContador_Adulto_Leve );
    printf( "%2d Atletas Categoria Adulto Medio\n", iContador_Adulto_Medio );
    printf( "%2d Atletas Categoria Adulto Pesado\n", iContador_Adulto_Pesado );
    
    printf( "\n\n\nProgramador: Charles Roberto Pilger\n" );
    return (EXIT_SUCCESS);
    
}

