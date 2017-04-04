#include <stdio.h>

int main()
{
    float num1, num2, num3, multiplicacao;
    
    printf("Cálculo de multiplicação\n\n");
    
    printf("Entre com o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Entre com o segundo número: ");
    scanf("%f", &num2);

    printf("Entre com o terceiro número: ");
    scanf("%f", &num3);
    
    multiplicacao = num1 * num2 * num3;
    
    printf("A multiplicação é de %.2f\n", multiplicacao);

    return 0;
}
