#include <stdio.h>
#include <stdlib.h>



int main() {

    int matriz[5][4],i,j, *ponteiro;

    ponteiro=matriz[0];

    for (i=0;i<20;i++) {
        *ponteiro=i; //muda o valor apontado pelo ponteiro para o valor de i
        ponteiro++;  // incrementa o ponteiro
    }

    for (i=0;i<5;i++) { //loop para imprimir a matriz
        for (j=0;j<4;j++) {
           printf("%i - ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
