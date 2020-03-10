#include <stdio.h>
#include <stdlib.h>


int main() {

    int matriz[4][2],i,j,aux[2]; //aux[2] é um vetor auxiliar criado para armazenas os dois elementos da linha na hora de trocar

    for (i=0;i<4;i++) { // entrada de dados pelo teclado
        for (j=0;j<2;j++) {
            printf("Digite o valor %i,%i: ",i,j);
            scanf ("%i", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n"); //impressão da matriz antes da troca
    for (i=0;i<4;i++) {
        for (j=0;j<2;j++) {
           printf("%i - ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<4;i=i+2) { // faz a troca entre as matrizes usando o vetor auxiliar
        aux[0]=matriz[i][0];
        aux[1]=matriz[i][1];

        matriz[i][0]=matriz[i+1][0];
        matriz[i][1]=matriz[i+1][1];

        matriz[i+1][0]=aux[0];
        matriz[i+1][1]=aux[1];
    }

     printf("Matriz trocada:\n"); //impressão da matriz depois da troca
    for (i=0;i<4;i++) {
        for (j=0;j<2;j++) {
           printf("%i - ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
