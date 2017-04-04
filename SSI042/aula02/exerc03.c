#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, peso1, peso2, peso3, peso4, media;
    
    printf("Cálculo de médias\n\n");

    printf("Entre com o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Entre com o peso da segunda nota: ");
    scanf("%f", &peso2);

    printf("Entre com o peso da terceira nota: ");
    scanf("%f", &peso3);

    printf("Entre com o peso da quarta nota: ");
    scanf("%f", &peso4);
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Entre com a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Entre com a quarta nota: ");
    scanf("%f", &nota4);
    
    media = ( nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4 ) / ( peso1 + peso2 + peso3 + peso4 );
    
    printf("A média é de %.2f\n", media);

    return 0;
}


