/*
 * Faça um programa para entrada dos dados de uma entrevista. Foram entrevistadas 
 * 10 pessoas. Para cada um dos entrevistados foram feitas as seguintes perguntas:
 * • Idade
 * • Gênero de filme preferido (1 - drama, 2 - comédia, 3 - suspense, 4 - aventura)
 * • Se costuma ir ao cinema (1 - sim, 2 - não)
 * • Se é sócio de alguma locadora (1 - sim, 2 - não)
 * A leitura dos dados deve ser informada com números conforme constam acima. 
 * Deseja-se saber:
 * 1) A média de idade dos entrevistados
 * 2) O número de pessoas que costumam ir ao cinema, que preferem filmes de comédia 
 *    e que possuem menos de 18 anos.
 */
 
#include <stdio.h>

int main() {
    unsigned int    iNumeroDeEntrevistados = 10;
    unsigned int    iIdadeEntrevistado;
    unsigned int    iGeneroPreferido;
    unsigned int    iCostumaIrNoCinema;
    unsigned int    iSocioDeLocadora;
    
    unsigned int    iContadorMenores = 0;
    unsigned int    iContadorCinefilos = 0;
    unsigned int    iContadorGostamDeComedia = 0;
    unsigned int    iContadorMenoresCinefilosQueGostamDeComedia = 0;
    
    unsigned int    iSomaTotalIdadeEntrevistados = 0;
    float           fMediaDeIdade;
    
    unsigned int    iNumeroEntrevistado, bValorValido;
    
    for(iNumeroEntrevistado = 1; iNumeroEntrevistado <= iNumeroDeEntrevistados; iNumeroEntrevistado++) {
        
        printf("Entrevistado %d\n", iNumeroEntrevistado);
        
        do {
            printf("Idade: ");
            scanf("%d", &iIdadeEntrevistado);
            
            bValorValido = ( iIdadeEntrevistado > 0 );
            if(!bValorValido) {
                printf("Valor inválido. Preencha novamente.\n");
            }
        } while(!bValorValido);
        
        iSomaTotalIdadeEntrevistados += iIdadeEntrevistado;
        if( iIdadeEntrevistado < 18 ) {
            iContadorMenores++;
        }
        
        do {
            printf("Genero de filme preferido (1 - drama, 2 - comedia, 3 - suspense, 4 - aventura): ");
            scanf("%d", &iGeneroPreferido);
            
            bValorValido = ( iGeneroPreferido >= 1 && iGeneroPreferido <= 4 );
            if(!bValorValido) {
                printf("Valor inválido. Preencha novamente.\n");
            }
        } while(!bValorValido);
        
        if( iGeneroPreferido == 2 ) {
            iContadorGostamDeComedia++;
        }
        
        do {
            printf("Costuma ir ao cinema (1 - sim, 2 - nao): ");
            scanf("%d", &iCostumaIrNoCinema);
            
            bValorValido = ( iCostumaIrNoCinema == 1 || iCostumaIrNoCinema == 2 );
            if(!bValorValido) {
                printf("Valor inválido. Preencha novamente.\n");
            }
        } while(!bValorValido);
        
        if( iCostumaIrNoCinema == 2 ) {
            iContadorCinefilos++;
        }
        do {
            printf("Eh socio de alguma locadora (1 - sim, 2 - não): ");
            scanf("%d", &iSocioDeLocadora);
            
            bValorValido = ( iSocioDeLocadora == 1 || iSocioDeLocadora == 2 );
            if(!bValorValido) {
                printf("Valor inválido. Preencha novamente.\n");
            }
        } while(!bValorValido);
        
        if( iIdadeEntrevistado < 18 && iGeneroPreferido == 2 && iCostumaIrNoCinema == 2) {
            iContadorMenoresCinefilosQueGostamDeComedia++;
        }
        
    }
    
    fMediaDeIdade = iSomaTotalIdadeEntrevistados / iNumeroDeEntrevistados;
    printf("Media de idade dos entrevistados: %.2f", fMediaDeIdade );
    printf("Numero de entrevistados que costumam ir ao cinema, que preferem filmes de comédia e que possuem menos de 18 anos: %d\n",
	iContadorMenoresCinefilosQueGostamDeComedia);
    
}
