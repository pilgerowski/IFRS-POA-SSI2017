#include <stdio.h>

int main()
{
    float num1, num2, soma;
    
    printf("Cálculo de soma\n\n");
    
    printf("Entre com o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Entre com o segundo número: ");
    scanf("%f", &num2);
    
    soma = num1 + num2;
    
    printf("A soma é de %.2f\n", soma);

    return 0;
}
