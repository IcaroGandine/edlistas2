#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20]; //vetor de char para armazenar o nome
    int qtdProvas, i; //int para armazenar a quantidade de provas, i eh a variavel do for
    float media=0; //float para armazenar a media de notas

    //ler o nome do aluno
    printf ("Digite o nome do aluno: ");
    scanf ("%s", nome);

    //ler do teclado quantas notas serao digitadas
    printf ("\nQuantas notas serao digitadas: ");
    scanf("%i", &qtdProvas);
    float notas[qtdProvas];

    // ler as notas do teclado
    for (i=0; i<qtdProvas; i++) {
        printf("\nDigite uma nota (%i/%i): ", i+1, qtdProvas);
        scanf("%f", &notas[i]);
    }

    //calcula a media das notas
    for (i=0; i<qtdProvas; i++) {
        media=media+notas[i];
    }
    media=media/qtdProvas;

    //imprime o nome e a media das notas
    printf ("\nAluno: %s", nome);
    printf ("\nA media das notas eh %f", media);


    return 0;
}
