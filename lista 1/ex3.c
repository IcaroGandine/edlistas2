#include <stdio.h>
#include <stdlib.h>




int main() {

    int vetor[5]={1,0,0,3,5},i,j,contzeros=0,ultimaPos=4;
    //i e j: variaveis para loops
    //contzeros: variavel criada para contar a quantidade de zeros no vetor
    //ultimaPos: variavel criada para transformar as posicoes finais do vetor em 0


    for (i=0;i<5;i++) { // percorre o vetor para procurar os zeros
        if (vetor[i]==0) { // se achar o zero entra em outro for para realocar o vetor sem o mesmo
            for (j=i;j<5;j++) {
                vetor[j]=vetor[j+1]; //substitui o zero da posicao atual pelo proximo elemento
                i--; //volta uma posicao, porque sem isso o programa passa direto se houverem dois zeros seguidos
            }
            contzeros++; //incrementa o contador de zeros, que sera util para que os zeros sejam adicionados novamente no final do vetor
        }
    }

    for (i=0;i<contzeros;i++) { //apos realocar o vetor esse for adiciona os zeros novamente no final (sem esse for o vetor exemplo ficaria {1,3,5,5,5}
        vetor[ultimaPos]=0; //vai adicionando os zeros
        ultimaPos--;
    }


    for (i=0;i<5;i++) {
        printf("%i\n", vetor[i]);
    }


    return 0;
}
