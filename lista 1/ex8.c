#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int aux; //variavel auxiliar para que o valor antigo de "a" não seja perdido

    aux=*a; //troca
    *a=*b;
    *b=aux;

}

int main() {
    int a=10,b=20;

    printf("Antes da troca:\n"); //print antes da troca
    printf("A: %i\n", a);
    printf("B: %i\n", b);

    swap(&a,&b);

    printf("Depois da troca:\n"); //print depois da troca
    printf("A: %i\n", a);
    printf("B: %i\n", b);

    return 0;
}
