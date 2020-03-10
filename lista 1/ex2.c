#include <stdio.h>
#include <stdlib.h>

int verificaPerfeito(int n) {

  int i,soma=0;

  for (i=1;i<n;i++) { // percorre os valores positivos menores que o numero digitado
    if (n%i==0) {         // verifica se eh um divisor valido
      soma=soma+i ;       // se for um divisor valido adiciona na soma
    }
  }

  if (soma==n) {            // se a soma for igual a n, o numero eh perfeito (retorna 1)
    return 1;
  }
  else {
    return 0;
  }
}


int main() {

    int perfeitos[4]={0,0,0,0},cont=0,numero=0,i;

    while(cont<4) { // esse while gera numeros de 0 a ifinito, ate o contador atingir 4
        if (verificaPerfeito(numero)==1) { // usa a funcao que verifica o numero, se for perfeito incrementa o contador
            perfeitos[cont]=numero; // coloca o numero no vetor de numeros perfeitos
            cont++;
        }
        numero++; // incrementa o numero, para o while ir pro proximo numero
    }

    for (i=0; i<4; i++) { // imprime o vetor de numeros perfeitos
        printf("\n%i", perfeitos[i]);
    }

    return 0;
}
