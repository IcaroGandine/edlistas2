#include <stdio.h>
#include <stdlib.h>

void copiaString(char* origem, int contador, char* destino){

	for(int i=0; i<contador; i++){
		destino[i]=origem[i];
    }

	destino[contador] = 0;
}

int main(){

	char destino[31];

	char origem[]="teste123";

	/*Tamanho maximo padrao = 30 caracteres

    Caso precise de mais caracteres basta mudar o tamanho do vetor "destino", colocar uma string maior que o tamanho maximo
    vai resultar em um erro*/


	int tamanho=0;

	printf("Digite o tamanho da string a ser copiada: ");

	scanf("%i", &tamanho);

    copiaString(origem, tamanho, destino);

    printf("\nA string original eh: %s", origem );

    printf("\nA string copiada eh: %s", destino );


	return 0;
}

