#include <stdio.h>

int main(void){

    int tempo, velocidade;
    float distancia, litros;

    scanf("%d %d", &tempo, &velocidade);

    distancia = tempo*velocidade;
    litros = distancia/12;
    printf("%.3f\n", litros);
    return 0;
}