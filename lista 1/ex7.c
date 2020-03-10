#include <stdio.h>
#include <stdlib.h>

void imprime(int *v, int tam) {
    int i;

    for(i=0;i<tam;i++) {
        printf("%i\n", v[i]); //impressao
    }

}

int main() {
    int v[5]={1,2,3,4,5}; //gera o vetor com o tamanho arbitrario

    imprime(&v,5); //chama a funcao

    return 0;
}
