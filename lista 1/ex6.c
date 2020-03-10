#include <stdio.h>
#include <stdlib.h>

void calcula(float l, float *area, float *perimetro) {
    *area=l*l; // troca o valor de area para lado*lado
    *perimetro=4*l; //troca o valor do perimetro para 4*lado
}

int main() {
    float area, perimetro, l;

    calcula (10,&area,&perimetro); //chama a funcao com o lado=10 usando os endereços das variaveis (passagem por referencia)

    printf("Area: %f\n", area);
    printf("Perimetro: %f", perimetro);


    return 0;
}
