/*
 * Programa que leia a quantidade de faltas, 3 notas de 5 alunos e calcule a 
 * média final deste aluno. Converter a média para conceitos de acordo com a 
 * tabela: 
 * Se faltas forem maiores que 5 então reprovado por faltas (conceito E)
 * 0~6.9: Conceito D - Reprovado;
 * 7.0~8.0: Conceito C;
 * 8,1~9.0: Conceito B;
 * 9.1~10: Conceito A.
 */
 
#include <stdio.h>

int main() {

    unsigned int    iNumeroDeAlunos = 5;
    unsigned int    iQuantidadeDeFaltas;
    float           fNota1, fNota2, fNota3, fMedia;
    
    unsigned int    bNotaValida = 0;
    unsigned int    iNumeroAluno;
    
    char            cConceitoAluno;
    
    for(iNumeroAluno = 1; iNumeroAluno <= iNumeroDeAlunos; iNumeroAluno++) {

        printf("Aluno %d:\n", iNumeroAluno);

        printf("Quantidade de faltas:");
        scanf("%d", &iQuantidadeDeFaltas);
        
        do {
            printf("Nota 1:");
            scanf("%f", &fNota1);
            
            bNotaValida = (fNota1 >= 0.0 && fNota1 <= 10.0);
            if(!bNotaValida) {
                printf("Nota invalida.\n");
            }
        } while(!bNotaValida);
        
        do {
            printf("Nota 2:");
            scanf("%f", &fNota2);
            
            bNotaValida = (fNota2 >= 0.0 && fNota2 <= 10.0);
            if(!bNotaValida) {
                printf("Nota invalida.\n");
            }
        } while(!bNotaValida);
        
        do {
            printf("Nota 3:");
            scanf("%f", &fNota3);
            
            bNotaValida = (fNota3 >= 0.0 && fNota3 <= 10.0);
            if(!bNotaValida) {
                printf("Nota invalida.\n");
            }
        } while(!bNotaValida);
        
        fMedia = ( fNota1 +  fNota2 + fNota3 ) / 3;
        
        if( fMedia < 7.0 ) {
            cConceitoAluno = 'D';
        } else if( fMedia < 8.1) {
            cConceitoAluno = 'C';
        } else if( fMedia < 9.1) {
            cConceitoAluno = 'B';
        } else {
            cConceitoAluno = 'A';
        }
        
        if( iQuantidadeDeFaltas > 5 ) {
            cConceitoAluno = 'E';
        }
        
        printf("Media final do aluno: %.2f\n", fMedia);
        switch( cConceitoAluno ) {
            case 'E': printf("Aluno reprovado por faltas."); break;
            case 'D': printf("Aluno reprovado."); break;
            default : printf("Aluno aprovado."); break;
        }
        
        printf("\n\n");
    
    }

    return 0;
    
}
