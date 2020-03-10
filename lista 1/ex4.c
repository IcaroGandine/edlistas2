#include <stdio.h>
#include <stdlib.h>


int main() {

    float matriz[3][3]; //declaração da matriz
    int i,j;

    for (i=0;i<3;i++) { // entrada de dados pelo teclado
        for (j=0;j<3;j++) {
            printf("Digite o valor %i,%i: ",i,j);
            scanf ("%f", &matriz[i][j]);
        }
    }
    float maior=matriz[0][0];

    printf("Matriz digitada:\n"); //impressão da matriz antes da normalização
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
           printf("%f - ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<3;i++) { // percorre a matriz para pegar o maior valor
        for (j=0;j<3;j++) {
            if (matriz[i][j]>maior) maior=matriz[i][j];
        }
    }

    for (i=0;i<3;i++) { // percorre a matriz e divide todos os valores pelo maior valor
        for (j=0;j<3;j++) {
            matriz[i][j]=matriz[i][j]/maior;
        }
    }

    printf("Matriz normalizada:\n"); // imprime a matriz normalizada
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
           printf("%f - ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


